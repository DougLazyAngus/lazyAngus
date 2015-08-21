#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6194;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9138;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6195;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6199;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6010;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6189;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9139;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9140;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m33352_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33352(__this, method) (( void (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2__ctor_m33352_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33353_gshared (Dictionary_2_t6194 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33353(__this, ___comparer, method) (( void (*) (Dictionary_2_t6194 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33353_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33354_gshared (Dictionary_2_t6194 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33354(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6194 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33354_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33355_gshared (Dictionary_2_t6194 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33355(__this, ___capacity, method) (( void (*) (Dictionary_2_t6194 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33355_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33356_gshared (Dictionary_2_t6194 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33356(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6194 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33356_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33357_gshared (Dictionary_2_t6194 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33357(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6194 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m33357_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33358_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33358(__this, method) (( Object_t* (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33358_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33359_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33359(__this, method) (( Object_t* (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33359_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33360_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33360(__this, method) (( Object_t * (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33360_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33361_gshared (Dictionary_2_t6194 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33361(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6194 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33361_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33362_gshared (Dictionary_2_t6194 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33362(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6194 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33362_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33363_gshared (Dictionary_2_t6194 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33363(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6194 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33363_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33364_gshared (Dictionary_2_t6194 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33364(__this, ___key, method) (( bool (*) (Dictionary_2_t6194 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33364_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33365_gshared (Dictionary_2_t6194 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33365(__this, ___key, method) (( void (*) (Dictionary_2_t6194 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33365_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33366_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33366(__this, method) (( bool (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33366_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33367_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33367(__this, method) (( Object_t * (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33368_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33368(__this, method) (( bool (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33368_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33369_gshared (Dictionary_2_t6194 * __this, KeyValuePair_2_t6191  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33369(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6194 *, KeyValuePair_2_t6191 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33369_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33370_gshared (Dictionary_2_t6194 * __this, KeyValuePair_2_t6191  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33370(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6194 *, KeyValuePair_2_t6191 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33370_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33371_gshared (Dictionary_2_t6194 * __this, KeyValuePair_2U5BU5D_t9139* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33371(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6194 *, KeyValuePair_2U5BU5D_t9139*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33371_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33372_gshared (Dictionary_2_t6194 * __this, KeyValuePair_2_t6191  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33372(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6194 *, KeyValuePair_2_t6191 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33372_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33373_gshared (Dictionary_2_t6194 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33373(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6194 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33373_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33374_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33374(__this, method) (( Object_t * (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33374_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33375_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33375(__this, method) (( Object_t* (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33375_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33376_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33376(__this, method) (( Object_t * (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33377_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33377(__this, method) (( int32_t (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_get_Count_m33377_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m33378_gshared (Dictionary_2_t6194 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33378(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6194 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m33378_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33379_gshared (Dictionary_2_t6194 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33379(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6194 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m33379_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33380_gshared (Dictionary_2_t6194 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33380(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6194 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33380_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33381_gshared (Dictionary_2_t6194 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33381(__this, ___size, method) (( void (*) (Dictionary_2_t6194 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33381_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33382_gshared (Dictionary_2_t6194 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33382(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6194 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33382_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6191  Dictionary_2_make_pair_m33383_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33383(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6191  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m33383_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m33384_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33384(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m33384_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m33385_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33385(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m33385_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33386_gshared (Dictionary_2_t6194 * __this, KeyValuePair_2U5BU5D_t9139* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33386(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6194 *, KeyValuePair_2U5BU5D_t9139*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33386_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m33387_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33387(__this, method) (( void (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_Resize_m33387_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33388_gshared (Dictionary_2_t6194 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33388(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6194 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m33388_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m33389_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33389(__this, method) (( void (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_Clear_m33389_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33390_gshared (Dictionary_2_t6194 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33390(__this, ___key, method) (( bool (*) (Dictionary_2_t6194 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m33390_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33391_gshared (Dictionary_2_t6194 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33391(__this, ___value, method) (( bool (*) (Dictionary_2_t6194 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m33391_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33392_gshared (Dictionary_2_t6194 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33392(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6194 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m33392_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33393_gshared (Dictionary_2_t6194 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33393(__this, ___sender, method) (( void (*) (Dictionary_2_t6194 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33393_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33394_gshared (Dictionary_2_t6194 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33394(__this, ___key, method) (( bool (*) (Dictionary_2_t6194 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m33394_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33395_gshared (Dictionary_2_t6194 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33395(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6194 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m33395_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6195 * Dictionary_2_get_Keys_m33396_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33396(__this, method) (( KeyCollection_t6195 * (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_get_Keys_m33396_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6199 * Dictionary_2_get_Values_m33397_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33397(__this, method) (( ValueCollection_t6199 * (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_get_Values_m33397_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m33398_gshared (Dictionary_2_t6194 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33398(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6194 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33398_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m33399_gshared (Dictionary_2_t6194 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33399(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6194 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33399_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33400_gshared (Dictionary_2_t6194 * __this, KeyValuePair_2_t6191  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33400(__this, ___pair, method) (( bool (*) (Dictionary_2_t6194 *, KeyValuePair_2_t6191 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33400_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6197  Dictionary_2_GetEnumerator_m33401_gshared (Dictionary_2_t6194 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33401(__this, method) (( Enumerator_t6197  (*) (Dictionary_2_t6194 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33401_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m33402_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33402(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33402_gshared)(__this /* static, unused */, ___key, ___value, method)
