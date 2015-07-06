#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3314;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1211;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t3318;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3322;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3312;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t4134;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3932;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3329;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m16853_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16853(__this, method) (( void (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2__ctor_m16853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16855_gshared (Dictionary_2_t3314 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16855(__this, ___comparer, method) (( void (*) (Dictionary_2_t3314 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16855_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m16857_gshared (Dictionary_2_t3314 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m16857(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3314 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16857_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16859_gshared (Dictionary_2_t3314 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16859(__this, ___capacity, method) (( void (*) (Dictionary_2_t3314 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16859_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16861_gshared (Dictionary_2_t3314 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16861(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3314 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16861_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16863_gshared (Dictionary_2_t3314 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16863(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3314 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m16863_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16865_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16865(__this, method) (( Object_t* (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16865_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16867_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16867(__this, method) (( Object_t* (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16867_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m16869_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m16869(__this, method) (( Object_t * (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16871_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16871(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16871_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16873_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3314 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16875_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16875(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3314 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16875_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16877_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16877(__this, ___key, method) (( bool (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16879_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16879(__this, ___key, method) (( void (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16881_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16881(__this, method) (( bool (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16883_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16883(__this, method) (( Object_t * (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16885_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16885(__this, method) (( bool (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887_gshared (Dictionary_2_t3314 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3314 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16889_gshared (Dictionary_2_t3314 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16889(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3314 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16889_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16891_gshared (Dictionary_2_t3314 * __this, KeyValuePair_2U5BU5D_t3932* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3314 *, KeyValuePair_2U5BU5D_t3932*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16891_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16893_gshared (Dictionary_2_t3314 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16893(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3314 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16895_gshared (Dictionary_2_t3314 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16895(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3314 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16895_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16897_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16897(__this, method) (( Object_t * (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16897_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16899_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16899(__this, method) (( Object_t* (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16899_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16901_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16901(__this, method) (( Object_t * (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16901_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16903_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16903(__this, method) (( int32_t (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_get_Count_m16903_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m16905_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16905(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16905_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16907_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16907(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3314 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m16907_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16909_gshared (Dictionary_2_t3314 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16909(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3314 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16909_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16911_gshared (Dictionary_2_t3314 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16911(__this, ___size, method) (( void (*) (Dictionary_2_t3314 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16911_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16913_gshared (Dictionary_2_t3314 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16913(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3314 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16913_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_make_pair_m16915_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16915(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m16915_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16917_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16917(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m16917_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m16919_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16919(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m16919_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16921_gshared (Dictionary_2_t3314 * __this, KeyValuePair_2U5BU5D_t3932* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16921(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3314 *, KeyValuePair_2U5BU5D_t3932*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16921_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m16923_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16923(__this, method) (( void (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_Resize_m16923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16925_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16925(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3314 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m16925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m16927_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16927(__this, method) (( void (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_Clear_m16927_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16929_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16929(__this, ___key, method) (( bool (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16931_gshared (Dictionary_2_t3314 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16931(__this, ___value, method) (( bool (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m16931_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16933_gshared (Dictionary_2_t3314 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16933(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3314 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m16933_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16935_gshared (Dictionary_2_t3314 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16935(__this, ___sender, method) (( void (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16935_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16937_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16937(__this, ___key, method) (( bool (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16937_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16939_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16939(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3314 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m16939_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3318 * Dictionary_2_get_Keys_m16940_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16940(__this, method) (( KeyCollection_t3318 * (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_get_Keys_m16940_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3322 * Dictionary_2_get_Values_m16942_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16942(__this, method) (( ValueCollection_t3322 * (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_get_Values_m16942_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16944_gshared (Dictionary_2_t3314 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16944(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16944_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m16946_gshared (Dictionary_2_t3314 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16946(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3314 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16946_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16948_gshared (Dictionary_2_t3314 * __this, KeyValuePair_2_t40  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16948(__this, ___pair, method) (( bool (*) (Dictionary_2_t3314 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16948_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3320  Dictionary_2_GetEnumerator_m16949_gshared (Dictionary_2_t3314 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16949(__this, method) (( Enumerator_t3320  (*) (Dictionary_2_t3314 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1685  Dictionary_2_U3CCopyToU3Em__0_m16951_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16951(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16951_gshared)(__this /* static, unused */, ___key, ___value, method)
