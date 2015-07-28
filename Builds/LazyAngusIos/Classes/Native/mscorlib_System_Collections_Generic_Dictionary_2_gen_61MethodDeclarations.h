#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7024;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9106;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7025;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7029;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1125;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9216;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7886;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7879;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
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
extern "C" void Dictionary_2__ctor_m44458_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44458(__this, method) (( void (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2__ctor_m44458_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44460_gshared (Dictionary_2_t7024 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44460(__this, ___comparer, method) (( void (*) (Dictionary_2_t7024 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44460_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44462_gshared (Dictionary_2_t7024 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44462(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7024 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44462_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44464_gshared (Dictionary_2_t7024 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44464(__this, ___capacity, method) (( void (*) (Dictionary_2_t7024 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44464_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44466_gshared (Dictionary_2_t7024 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44466(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7024 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44466_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44468_gshared (Dictionary_2_t7024 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44468(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7024 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m44468_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44470_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44470(__this, method) (( Object_t* (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44470_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44472_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44472(__this, method) (( Object_t* (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44472_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44474_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44474(__this, method) (( Object_t * (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44474_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44476_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44476(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44476_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44478_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44478(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7024 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44478_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44480_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44480(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7024 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44480_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44482_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44482(__this, ___key, method) (( bool (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44482_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44484_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44484(__this, ___key, method) (( void (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44484_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44486_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44486(__this, method) (( bool (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44486_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44488_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44488(__this, method) (( Object_t * (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44490_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44490(__this, method) (( bool (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44490_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44492_gshared (Dictionary_2_t7024 * __this, KeyValuePair_2_t6935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44492(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7024 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44492_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44494_gshared (Dictionary_2_t7024 * __this, KeyValuePair_2_t6935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44494(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7024 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44494_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44496_gshared (Dictionary_2_t7024 * __this, KeyValuePair_2U5BU5D_t7886* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44496(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7024 *, KeyValuePair_2U5BU5D_t7886*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44496_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44498_gshared (Dictionary_2_t7024 * __this, KeyValuePair_2_t6935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44498(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7024 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44498_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44500_gshared (Dictionary_2_t7024 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44500(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7024 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44500_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44502_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44502(__this, method) (( Object_t * (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44502_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44504_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44504(__this, method) (( Object_t* (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44504_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44506_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44506(__this, method) (( Object_t * (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44506_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44508_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44508(__this, method) (( int32_t (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_get_Count_m44508_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m44510_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44510(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44510_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44512_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44512(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7024 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m44512_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44514_gshared (Dictionary_2_t7024 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44514(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7024 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44514_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44516_gshared (Dictionary_2_t7024 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44516(__this, ___size, method) (( void (*) (Dictionary_2_t7024 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44516_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44518_gshared (Dictionary_2_t7024 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44518(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7024 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44518_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6935  Dictionary_2_make_pair_m44520_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44520(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6935  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m44520_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44522_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44522(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m44522_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m44524_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44524(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m44524_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44526_gshared (Dictionary_2_t7024 * __this, KeyValuePair_2U5BU5D_t7886* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44526(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7024 *, KeyValuePair_2U5BU5D_t7886*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44526_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m44528_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44528(__this, method) (( void (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_Resize_m44528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44530_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44530(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7024 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m44530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m44532_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44532(__this, method) (( void (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_Clear_m44532_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44534_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44534(__this, ___key, method) (( bool (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44534_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44536_gshared (Dictionary_2_t7024 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44536(__this, ___value, method) (( bool (*) (Dictionary_2_t7024 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m44536_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44538_gshared (Dictionary_2_t7024 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44538(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7024 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m44538_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44540_gshared (Dictionary_2_t7024 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44540(__this, ___sender, method) (( void (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44540_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44542_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44542(__this, ___key, method) (( bool (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44542_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44544_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44544(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7024 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m44544_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7025 * Dictionary_2_get_Keys_m44546_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44546(__this, method) (( KeyCollection_t7025 * (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_get_Keys_m44546_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7029 * Dictionary_2_get_Values_m44548_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44548(__this, method) (( ValueCollection_t7029 * (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_get_Values_m44548_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44550_gshared (Dictionary_2_t7024 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44550(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44550_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m44552_gshared (Dictionary_2_t7024 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44552(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7024 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44552_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44554_gshared (Dictionary_2_t7024 * __this, KeyValuePair_2_t6935  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44554(__this, ___pair, method) (( bool (*) (Dictionary_2_t7024 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44554_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7027  Dictionary_2_GetEnumerator_m44556_gshared (Dictionary_2_t7024 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44556(__this, method) (( Enumerator_t7027  (*) (Dictionary_2_t7024 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44556_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m44558_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44558(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44558_gshared)(__this /* static, unused */, ___key, ___value, method)
