#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8374;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8981;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8375;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t8379;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1134;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t9523;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7614;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7176;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__64.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m60356_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m60356(__this, method) (( void (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2__ctor_m60356_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60358_gshared (Dictionary_2_t8374 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60358(__this, ___comparer, method) (( void (*) (Dictionary_2_t8374 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60358_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m60360_gshared (Dictionary_2_t8374 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m60360(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8374 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60360_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m60362_gshared (Dictionary_2_t8374 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m60362(__this, ___capacity, method) (( void (*) (Dictionary_2_t8374 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m60362_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60364_gshared (Dictionary_2_t8374 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60364(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8374 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60364_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m60366_gshared (Dictionary_2_t8374 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m60366(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8374 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m60366_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60368_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60368(__this, method) (( Object_t* (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60368_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60370_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60370(__this, method) (( Object_t* (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60370_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m60372_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60372(__this, method) (( Object_t * (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m60372_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m60374_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60374(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m60374_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m60376_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60376(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8374 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m60376_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m60378_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m60378(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8374 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m60378_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m60380_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m60380(__this, ___key, method) (( bool (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m60380_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m60382_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m60382(__this, ___key, method) (( void (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m60382_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60384_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60384(__this, method) (( bool (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60384_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60386_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60386(__this, method) (( Object_t * (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60386_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60388_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60388(__this, method) (( bool (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60388_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60390_gshared (Dictionary_2_t8374 * __this, KeyValuePair_2_t7171  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60390(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8374 *, KeyValuePair_2_t7171 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60390_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60392_gshared (Dictionary_2_t8374 * __this, KeyValuePair_2_t7171  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60392(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8374 *, KeyValuePair_2_t7171 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60392_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60394_gshared (Dictionary_2_t8374 * __this, KeyValuePair_2U5BU5D_t7614* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60394(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8374 *, KeyValuePair_2U5BU5D_t7614*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60394_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60396_gshared (Dictionary_2_t8374 * __this, KeyValuePair_2_t7171  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60396(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8374 *, KeyValuePair_2_t7171 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60396_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m60398_gshared (Dictionary_2_t8374 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60398(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8374 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m60398_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60400_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60400(__this, method) (( Object_t * (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60400_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60402_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60402(__this, method) (( Object_t* (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60402_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60404_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60404(__this, method) (( Object_t * (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60404_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m60406_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m60406(__this, method) (( int32_t (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_get_Count_m60406_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m60408_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m60408(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m60408_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m60410_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m60410(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8374 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m60410_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m60412_gshared (Dictionary_2_t8374 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m60412(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8374 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m60412_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m60414_gshared (Dictionary_2_t8374 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m60414(__this, ___size, method) (( void (*) (Dictionary_2_t8374 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m60414_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m60416_gshared (Dictionary_2_t8374 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m60416(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8374 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m60416_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7171  Dictionary_2_make_pair_m60418_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m60418(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7171  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m60418_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m60420_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m60420(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m60420_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m60422_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m60422(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m60422_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m60424_gshared (Dictionary_2_t8374 * __this, KeyValuePair_2U5BU5D_t7614* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m60424(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8374 *, KeyValuePair_2U5BU5D_t7614*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m60424_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m60426_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m60426(__this, method) (( void (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_Resize_m60426_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m60428_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m60428(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8374 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m60428_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m60430_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m60430(__this, method) (( void (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_Clear_m60430_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m60432_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m60432(__this, ___key, method) (( bool (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m60432_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m60434_gshared (Dictionary_2_t8374 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m60434(__this, ___value, method) (( bool (*) (Dictionary_2_t8374 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m60434_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m60436_gshared (Dictionary_2_t8374 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m60436(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8374 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m60436_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m60438_gshared (Dictionary_2_t8374 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m60438(__this, ___sender, method) (( void (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m60438_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m60440_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m60440(__this, ___key, method) (( bool (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m60440_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m60442_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m60442(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8374 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m60442_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t8375 * Dictionary_2_get_Keys_m60444_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m60444(__this, method) (( KeyCollection_t8375 * (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_get_Keys_m60444_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t8379 * Dictionary_2_get_Values_m60446_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m60446(__this, method) (( ValueCollection_t8379 * (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_get_Values_m60446_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m60448_gshared (Dictionary_2_t8374 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m60448(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m60448_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m60450_gshared (Dictionary_2_t8374 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m60450(__this, ___value, method) (( int64_t (*) (Dictionary_2_t8374 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m60450_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m60452_gshared (Dictionary_2_t8374 * __this, KeyValuePair_2_t7171  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m60452(__this, ___pair, method) (( bool (*) (Dictionary_2_t8374 *, KeyValuePair_2_t7171 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m60452_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8377  Dictionary_2_GetEnumerator_m60454_gshared (Dictionary_2_t8374 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m60454(__this, method) (( Enumerator_t8377  (*) (Dictionary_2_t8374 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60454_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2088  Dictionary_2_U3CCopyToU3Em__0_m60456_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m60456(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m60456_gshared)(__this /* static, unused */, ___key, ___value, method)
