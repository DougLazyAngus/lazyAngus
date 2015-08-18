#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7106;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9207;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7107;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7111;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9317;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7968;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7961;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
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
extern "C" void Dictionary_2__ctor_m45202_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45202(__this, method) (( void (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2__ctor_m45202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45204_gshared (Dictionary_2_t7106 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45204(__this, ___comparer, method) (( void (*) (Dictionary_2_t7106 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45204_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45206_gshared (Dictionary_2_t7106 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45206(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7106 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45206_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45208_gshared (Dictionary_2_t7106 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45208(__this, ___capacity, method) (( void (*) (Dictionary_2_t7106 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45208_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45210_gshared (Dictionary_2_t7106 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45210(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7106 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45210_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45212_gshared (Dictionary_2_t7106 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45212(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7106 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m45212_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45214_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45214(__this, method) (( Object_t* (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45214_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45216_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45216(__this, method) (( Object_t* (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45216_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45218_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45218(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45218_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45220_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45220(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45220_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45222_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45222(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45224_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45224(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45224_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45226_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45226(__this, ___key, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45226_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45228_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45228(__this, ___key, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45228_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45230_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45230(__this, method) (( bool (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45230_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45232_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45232(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45232_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45234_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45234(__this, method) (( bool (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45234_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45236_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45236(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45236_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45238_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45238(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45238_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45240_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2U5BU5D_t7968* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45240(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, KeyValuePair_2U5BU5D_t7968*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45240_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45242_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45242(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45242_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45244_gshared (Dictionary_2_t7106 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45244(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45244_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45246_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45246(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45246_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45248_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45248(__this, method) (( Object_t* (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45248_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45250_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45250(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45250_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45252_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45252(__this, method) (( int32_t (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_get_Count_m45252_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m45254_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45254(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45254_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45256_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45256(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m45256_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45258_gshared (Dictionary_2_t7106 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45258(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7106 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45258_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45260_gshared (Dictionary_2_t7106 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45260(__this, ___size, method) (( void (*) (Dictionary_2_t7106 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45260_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45262_gshared (Dictionary_2_t7106 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45262(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45262_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7017  Dictionary_2_make_pair_m45264_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45264(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7017  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m45264_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45266_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45266(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m45266_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m45268_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45268(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m45268_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45270_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2U5BU5D_t7968* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45270(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, KeyValuePair_2U5BU5D_t7968*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45270_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m45272_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45272(__this, method) (( void (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_Resize_m45272_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45274_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45274(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m45274_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m45276_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45276(__this, method) (( void (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_Clear_m45276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45278_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45278(__this, ___key, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45278_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45280_gshared (Dictionary_2_t7106 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45280(__this, ___value, method) (( bool (*) (Dictionary_2_t7106 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m45280_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45282_gshared (Dictionary_2_t7106 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45282(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7106 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m45282_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45284_gshared (Dictionary_2_t7106 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45284(__this, ___sender, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45284_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45286_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45286(__this, ___key, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45286_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45288_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45288(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m45288_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7107 * Dictionary_2_get_Keys_m45290_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45290(__this, method) (( KeyCollection_t7107 * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_get_Keys_m45290_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7111 * Dictionary_2_get_Values_m45292_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45292(__this, method) (( ValueCollection_t7111 * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_get_Values_m45292_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45294_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45294(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45294_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m45296_gshared (Dictionary_2_t7106 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45296(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45296_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45298_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45298(__this, ___pair, method) (( bool (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45298_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7109  Dictionary_2_GetEnumerator_m45300_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45300(__this, method) (( Enumerator_t7109  (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45300_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m45302_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45302(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45302_gshared)(__this /* static, unused */, ___key, ___value, method)
