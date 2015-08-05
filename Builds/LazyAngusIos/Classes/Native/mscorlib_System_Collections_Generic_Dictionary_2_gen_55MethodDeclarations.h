#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6135;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9041;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6136;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6140;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1136;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9047;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7214;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7116;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32750_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m32750(__this, method) (( void (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2__ctor_m32750_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32751_gshared (Dictionary_2_t6135 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32751(__this, ___comparer, method) (( void (*) (Dictionary_2_t6135 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32751_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32753_gshared (Dictionary_2_t6135 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m32753(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6135 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32753_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32755_gshared (Dictionary_2_t6135 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m32755(__this, ___capacity, method) (( void (*) (Dictionary_2_t6135 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m32755_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32757_gshared (Dictionary_2_t6135 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32757(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6135 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32757_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32759_gshared (Dictionary_2_t6135 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m32759(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6135 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m32759_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32761_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32761(__this, method) (( Object_t* (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32761_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32763_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32763(__this, method) (( Object_t* (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32763_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32765_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32765(__this, method) (( Object_t * (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m32765_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32767_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32767(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m32767_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32769_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32769(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6135 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m32769_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32771_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m32771(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6135 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m32771_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32773_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m32773(__this, ___key, method) (( bool (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m32773_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32775_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m32775(__this, ___key, method) (( void (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m32775_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32777_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32777(__this, method) (( bool (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32777_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32779_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32779(__this, method) (( Object_t * (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32781_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32781(__this, method) (( bool (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32783_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32783(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6135 *, KeyValuePair_2_t6111 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32783_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32785_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32785(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6135 *, KeyValuePair_2_t6111 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32785_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32787_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2U5BU5D_t7214* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32787(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6135 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32787_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32789_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32789(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6135 *, KeyValuePair_2_t6111 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32789_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32791_gshared (Dictionary_2_t6135 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32791(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m32791_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32793_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32793(__this, method) (( Object_t * (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32793_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32795_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32795(__this, method) (( Object_t* (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32795_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32797_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32797(__this, method) (( Object_t * (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32797_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32799_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m32799(__this, method) (( int32_t (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_get_Count_m32799_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32801_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m32801(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m32801_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32803_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m32803(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6135 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m32803_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32805_gshared (Dictionary_2_t6135 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m32805(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6135 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m32805_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32807_gshared (Dictionary_2_t6135 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m32807(__this, ___size, method) (( void (*) (Dictionary_2_t6135 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m32807_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32809_gshared (Dictionary_2_t6135 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32809(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m32809_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6111  Dictionary_2_make_pair_m32811_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m32811(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6111  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m32811_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m32813_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m32813(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m32813_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32815_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m32815(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m32815_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32817_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2U5BU5D_t7214* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m32817(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6135 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m32817_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m32819_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m32819(__this, method) (( void (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_Resize_m32819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32821_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m32821(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6135 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m32821_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32823_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m32823(__this, method) (( void (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_Clear_m32823_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32825_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m32825(__this, ___key, method) (( bool (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m32825_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32827_gshared (Dictionary_2_t6135 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m32827(__this, ___value, method) (( bool (*) (Dictionary_2_t6135 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m32827_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32829_gshared (Dictionary_2_t6135 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m32829(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6135 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m32829_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32831_gshared (Dictionary_2_t6135 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32831(__this, ___sender, method) (( void (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m32831_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32833_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m32833(__this, ___key, method) (( bool (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m32833_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32835_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m32835(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6135 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m32835_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6136 * Dictionary_2_get_Keys_m32837_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m32837(__this, method) (( KeyCollection_t6136 * (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_get_Keys_m32837_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6140 * Dictionary_2_get_Values_m32839_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m32839(__this, method) (( ValueCollection_t6140 * (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_get_Values_m32839_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m32841_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m32841(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m32841_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32843_gshared (Dictionary_2_t6135 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m32843(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m32843_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32845_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32845(__this, ___pair, method) (( bool (*) (Dictionary_2_t6135 *, KeyValuePair_2_t6111 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32845_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6138  Dictionary_2_GetEnumerator_m32847_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32847(__this, method) (( Enumerator_t6138  (*) (Dictionary_2_t6135 *, const MethodInfo*))Dictionary_2_GetEnumerator_m32847_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m32849_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32849(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32849_gshared)(__this /* static, unused */, ___key, ___value, method)
