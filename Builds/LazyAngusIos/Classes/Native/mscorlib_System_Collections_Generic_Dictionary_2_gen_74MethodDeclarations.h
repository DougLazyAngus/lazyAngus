#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9030;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t9031;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t9035;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t10262;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8270;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7832;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__65.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m65840_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m65840(__this, method) (( void (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2__ctor_m65840_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m65842_gshared (Dictionary_2_t9030 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m65842(__this, ___comparer, method) (( void (*) (Dictionary_2_t9030 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65842_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m65844_gshared (Dictionary_2_t9030 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m65844(__this, ___dictionary, method) (( void (*) (Dictionary_2_t9030 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65844_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m65846_gshared (Dictionary_2_t9030 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m65846(__this, ___capacity, method) (( void (*) (Dictionary_2_t9030 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m65846_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m65848_gshared (Dictionary_2_t9030 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m65848(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t9030 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65848_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m65850_gshared (Dictionary_2_t9030 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m65850(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9030 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m65850_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65852_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65852(__this, method) (( Object_t* (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65852_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65854_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65854(__this, method) (( Object_t* (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65854_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m65856_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m65856(__this, method) (( Object_t * (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m65856_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m65858_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m65858(__this, method) (( Object_t * (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m65858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m65860_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m65860(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m65860_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m65862_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m65862(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9030 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m65862_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m65864_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m65864(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9030 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m65864_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m65866_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m65866(__this, ___key, method) (( bool (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m65866_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m65868_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m65868(__this, ___key, method) (( void (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m65868_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65870_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65870(__this, method) (( bool (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65870_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65872_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65872(__this, method) (( Object_t * (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65874_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65874(__this, method) (( bool (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65876_gshared (Dictionary_2_t9030 * __this, KeyValuePair_2_t7827  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65876(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9030 *, KeyValuePair_2_t7827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65876_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65878_gshared (Dictionary_2_t9030 * __this, KeyValuePair_2_t7827  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65878(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9030 *, KeyValuePair_2_t7827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65878_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65880_gshared (Dictionary_2_t9030 * __this, KeyValuePair_2U5BU5D_t8270* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65880(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9030 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65880_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65882_gshared (Dictionary_2_t9030 * __this, KeyValuePair_2_t7827  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65882(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9030 *, KeyValuePair_2_t7827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65882_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m65884_gshared (Dictionary_2_t9030 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m65884(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9030 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m65884_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65886_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65886(__this, method) (( Object_t * (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65886_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65888_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65888(__this, method) (( Object_t* (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65888_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65890_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65890(__this, method) (( Object_t * (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65890_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m65892_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m65892(__this, method) (( int32_t (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_get_Count_m65892_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m65894_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m65894(__this, ___key, method) (( int64_t (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m65894_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m65896_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m65896(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9030 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m65896_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m65898_gshared (Dictionary_2_t9030 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m65898(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9030 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m65898_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m65900_gshared (Dictionary_2_t9030 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m65900(__this, ___size, method) (( void (*) (Dictionary_2_t9030 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m65900_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m65902_gshared (Dictionary_2_t9030 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m65902(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9030 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m65902_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7827  Dictionary_2_make_pair_m65904_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m65904(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7827  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m65904_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m65906_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m65906(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m65906_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m65908_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m65908(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m65908_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m65910_gshared (Dictionary_2_t9030 * __this, KeyValuePair_2U5BU5D_t8270* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m65910(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9030 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m65910_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m65912_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m65912(__this, method) (( void (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_Resize_m65912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m65914_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m65914(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9030 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m65914_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m65916_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m65916(__this, method) (( void (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_Clear_m65916_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m65918_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m65918(__this, ___key, method) (( bool (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m65918_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m65920_gshared (Dictionary_2_t9030 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m65920(__this, ___value, method) (( bool (*) (Dictionary_2_t9030 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m65920_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m65922_gshared (Dictionary_2_t9030 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m65922(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9030 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m65922_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m65924_gshared (Dictionary_2_t9030 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m65924(__this, ___sender, method) (( void (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m65924_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m65926_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m65926(__this, ___key, method) (( bool (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m65926_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m65928_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m65928(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9030 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m65928_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t9031 * Dictionary_2_get_Keys_m65930_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m65930(__this, method) (( KeyCollection_t9031 * (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_get_Keys_m65930_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t9035 * Dictionary_2_get_Values_m65932_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m65932(__this, method) (( ValueCollection_t9035 * (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_get_Values_m65932_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m65934_gshared (Dictionary_2_t9030 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m65934(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m65934_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m65936_gshared (Dictionary_2_t9030 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m65936(__this, ___value, method) (( int64_t (*) (Dictionary_2_t9030 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m65936_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m65938_gshared (Dictionary_2_t9030 * __this, KeyValuePair_2_t7827  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m65938(__this, ___pair, method) (( bool (*) (Dictionary_2_t9030 *, KeyValuePair_2_t7827 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m65938_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t9033  Dictionary_2_GetEnumerator_m65940_gshared (Dictionary_2_t9030 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m65940(__this, method) (( Enumerator_t9033  (*) (Dictionary_2_t9030 *, const MethodInfo*))Dictionary_2_GetEnumerator_m65940_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m65942_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m65942(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m65942_gshared)(__this /* static, unused */, ___key, ___value, method)
