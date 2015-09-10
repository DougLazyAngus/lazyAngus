#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6787;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9778;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6788;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6792;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9784;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7868;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7770;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m38195_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m38195(__this, method) (( void (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2__ctor_m38195_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38196_gshared (Dictionary_2_t6787 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38196(__this, ___comparer, method) (( void (*) (Dictionary_2_t6787 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38196_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m38198_gshared (Dictionary_2_t6787 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m38198(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6787 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38198_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m38200_gshared (Dictionary_2_t6787 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m38200(__this, ___capacity, method) (( void (*) (Dictionary_2_t6787 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m38200_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38202_gshared (Dictionary_2_t6787 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38202(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6787 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38202_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m38204_gshared (Dictionary_2_t6787 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m38204(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6787 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m38204_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38206_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38206(__this, method) (( Object_t* (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38206_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38208_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38208(__this, method) (( Object_t* (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38208_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m38210_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m38210(__this, method) (( Object_t * (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m38210_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m38212_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m38212(__this, method) (( Object_t * (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m38212_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m38214_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m38214(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m38214_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m38216_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m38216(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6787 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m38216_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m38218_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m38218(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6787 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m38218_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m38220_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m38220(__this, ___key, method) (( bool (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m38220_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m38222_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m38222(__this, ___key, method) (( void (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m38222_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38224_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38224(__this, method) (( bool (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38224_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38226_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38226(__this, method) (( Object_t * (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38226_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38228_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38228(__this, method) (( bool (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38228_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38230_gshared (Dictionary_2_t6787 * __this, KeyValuePair_2_t6764  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38230(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6787 *, KeyValuePair_2_t6764 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38230_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38232_gshared (Dictionary_2_t6787 * __this, KeyValuePair_2_t6764  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38232(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6787 *, KeyValuePair_2_t6764 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38232_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38234_gshared (Dictionary_2_t6787 * __this, KeyValuePair_2U5BU5D_t7868* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38234(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6787 *, KeyValuePair_2U5BU5D_t7868*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38234_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38236_gshared (Dictionary_2_t6787 * __this, KeyValuePair_2_t6764  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38236(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6787 *, KeyValuePair_2_t6764 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38236_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m38238_gshared (Dictionary_2_t6787 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38238(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6787 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m38238_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38240_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38240(__this, method) (( Object_t * (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38240_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38242_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38242(__this, method) (( Object_t* (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38242_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38244_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38244(__this, method) (( Object_t * (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m38246_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m38246(__this, method) (( int32_t (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_get_Count_m38246_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m38248_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m38248(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m38248_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m38250_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m38250(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6787 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m38250_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m38252_gshared (Dictionary_2_t6787 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m38252(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6787 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m38252_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m38254_gshared (Dictionary_2_t6787 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m38254(__this, ___size, method) (( void (*) (Dictionary_2_t6787 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m38254_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m38256_gshared (Dictionary_2_t6787 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m38256(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6787 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m38256_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6764  Dictionary_2_make_pair_m38258_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m38258(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6764  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m38258_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m38260_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m38260(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m38260_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m38262_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m38262(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m38262_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m38264_gshared (Dictionary_2_t6787 * __this, KeyValuePair_2U5BU5D_t7868* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m38264(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6787 *, KeyValuePair_2U5BU5D_t7868*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m38264_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m38266_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m38266(__this, method) (( void (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_Resize_m38266_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m38268_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m38268(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6787 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m38268_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m38270_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m38270(__this, method) (( void (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_Clear_m38270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m38272_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m38272(__this, ___key, method) (( bool (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m38272_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m38274_gshared (Dictionary_2_t6787 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m38274(__this, ___value, method) (( bool (*) (Dictionary_2_t6787 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m38274_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m38276_gshared (Dictionary_2_t6787 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m38276(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6787 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m38276_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m38278_gshared (Dictionary_2_t6787 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m38278(__this, ___sender, method) (( void (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m38278_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m38280_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m38280(__this, ___key, method) (( bool (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m38280_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m38282_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m38282(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6787 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m38282_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6788 * Dictionary_2_get_Keys_m38284_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m38284(__this, method) (( KeyCollection_t6788 * (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_get_Keys_m38284_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6792 * Dictionary_2_get_Values_m38286_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m38286(__this, method) (( ValueCollection_t6792 * (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_get_Values_m38286_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m38288_gshared (Dictionary_2_t6787 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m38288(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m38288_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m38290_gshared (Dictionary_2_t6787 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m38290(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6787 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m38290_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38292_gshared (Dictionary_2_t6787 * __this, KeyValuePair_2_t6764  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m38292(__this, ___pair, method) (( bool (*) (Dictionary_2_t6787 *, KeyValuePair_2_t6764 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m38292_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6790  Dictionary_2_GetEnumerator_m38294_gshared (Dictionary_2_t6787 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m38294(__this, method) (( Enumerator_t6790  (*) (Dictionary_2_t6787 *, const MethodInfo*))Dictionary_2_GetEnumerator_m38294_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m38296_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m38296(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m38296_gshared)(__this /* static, unused */, ___key, ___value, method)
