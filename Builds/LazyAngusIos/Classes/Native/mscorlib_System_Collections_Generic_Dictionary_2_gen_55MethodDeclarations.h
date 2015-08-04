#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6133;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9039;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6134;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6138;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1134;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9045;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7212;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7114;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32738_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m32738(__this, method) (( void (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2__ctor_m32738_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32739_gshared (Dictionary_2_t6133 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32739(__this, ___comparer, method) (( void (*) (Dictionary_2_t6133 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32739_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32741_gshared (Dictionary_2_t6133 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m32741(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6133 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32741_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32743_gshared (Dictionary_2_t6133 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m32743(__this, ___capacity, method) (( void (*) (Dictionary_2_t6133 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m32743_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32745_gshared (Dictionary_2_t6133 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32745(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6133 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32745_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32747_gshared (Dictionary_2_t6133 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m32747(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6133 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m32747_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32749_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32749(__this, method) (( Object_t* (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32749_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32751_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32751(__this, method) (( Object_t* (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32751_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32753_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32753(__this, method) (( Object_t * (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m32753_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32755_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32755(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m32755_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32757_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32757(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6133 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m32757_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32759_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m32759(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6133 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m32759_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32761_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m32761(__this, ___key, method) (( bool (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m32761_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32763_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m32763(__this, ___key, method) (( void (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m32763_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32765_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32765(__this, method) (( bool (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32765_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32767_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32767(__this, method) (( Object_t * (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32769_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32769(__this, method) (( bool (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32769_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32771_gshared (Dictionary_2_t6133 * __this, KeyValuePair_2_t6109  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32771(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6133 *, KeyValuePair_2_t6109 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32771_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32773_gshared (Dictionary_2_t6133 * __this, KeyValuePair_2_t6109  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32773(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6133 *, KeyValuePair_2_t6109 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32773_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32775_gshared (Dictionary_2_t6133 * __this, KeyValuePair_2U5BU5D_t7212* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32775(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6133 *, KeyValuePair_2U5BU5D_t7212*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32775_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32777_gshared (Dictionary_2_t6133 * __this, KeyValuePair_2_t6109  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32777(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6133 *, KeyValuePair_2_t6109 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32777_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32779_gshared (Dictionary_2_t6133 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32779(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6133 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m32779_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32781_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32781(__this, method) (( Object_t * (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32781_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32783_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32783(__this, method) (( Object_t* (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32783_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32785_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32785(__this, method) (( Object_t * (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32785_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32787_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m32787(__this, method) (( int32_t (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_get_Count_m32787_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32789_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m32789(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m32789_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32791_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m32791(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6133 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m32791_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32793_gshared (Dictionary_2_t6133 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m32793(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6133 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m32793_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32795_gshared (Dictionary_2_t6133 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m32795(__this, ___size, method) (( void (*) (Dictionary_2_t6133 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m32795_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32797_gshared (Dictionary_2_t6133 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32797(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6133 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m32797_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6109  Dictionary_2_make_pair_m32799_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m32799(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6109  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m32799_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m32801_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m32801(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m32801_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32803_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m32803(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m32803_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32805_gshared (Dictionary_2_t6133 * __this, KeyValuePair_2U5BU5D_t7212* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m32805(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6133 *, KeyValuePair_2U5BU5D_t7212*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m32805_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m32807_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m32807(__this, method) (( void (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_Resize_m32807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32809_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m32809(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6133 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m32809_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32811_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m32811(__this, method) (( void (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_Clear_m32811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32813_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m32813(__this, ___key, method) (( bool (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m32813_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32815_gshared (Dictionary_2_t6133 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m32815(__this, ___value, method) (( bool (*) (Dictionary_2_t6133 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m32815_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32817_gshared (Dictionary_2_t6133 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m32817(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6133 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m32817_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32819_gshared (Dictionary_2_t6133 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32819(__this, ___sender, method) (( void (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m32819_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32821_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m32821(__this, ___key, method) (( bool (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m32821_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32823_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m32823(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6133 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m32823_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6134 * Dictionary_2_get_Keys_m32825_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m32825(__this, method) (( KeyCollection_t6134 * (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_get_Keys_m32825_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6138 * Dictionary_2_get_Values_m32827_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m32827(__this, method) (( ValueCollection_t6138 * (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_get_Values_m32827_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m32829_gshared (Dictionary_2_t6133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m32829(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m32829_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32831_gshared (Dictionary_2_t6133 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m32831(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6133 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m32831_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32833_gshared (Dictionary_2_t6133 * __this, KeyValuePair_2_t6109  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32833(__this, ___pair, method) (( bool (*) (Dictionary_2_t6133 *, KeyValuePair_2_t6109 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32833_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6136  Dictionary_2_GetEnumerator_m32835_gshared (Dictionary_2_t6133 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32835(__this, method) (( Enumerator_t6136  (*) (Dictionary_2_t6133 *, const MethodInfo*))Dictionary_2_GetEnumerator_m32835_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2088  Dictionary_2_U3CCopyToU3Em__0_m32837_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32837(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32837_gshared)(__this /* static, unused */, ___key, ___value, method)
