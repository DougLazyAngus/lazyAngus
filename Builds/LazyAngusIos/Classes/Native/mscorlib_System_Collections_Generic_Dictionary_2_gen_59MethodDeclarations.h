#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6765;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9771;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6766;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6770;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6581;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6760;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9772;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9773;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m37979_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m37979(__this, method) (( void (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2__ctor_m37979_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37980_gshared (Dictionary_2_t6765 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37980(__this, ___comparer, method) (( void (*) (Dictionary_2_t6765 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37980_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m37981_gshared (Dictionary_2_t6765 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m37981(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6765 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37981_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m37982_gshared (Dictionary_2_t6765 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m37982(__this, ___capacity, method) (( void (*) (Dictionary_2_t6765 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m37982_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37983_gshared (Dictionary_2_t6765 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37983(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6765 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37983_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m37984_gshared (Dictionary_2_t6765 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m37984(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6765 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m37984_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37985_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37985(__this, method) (( Object_t* (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37985_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37986_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37986(__this, method) (( Object_t* (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37986_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m37987_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m37987(__this, method) (( Object_t * (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m37987_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m37988_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m37988(__this, method) (( Object_t * (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m37988_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m37989_gshared (Dictionary_2_t6765 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m37989(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6765 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m37989_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m37990_gshared (Dictionary_2_t6765 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m37990(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6765 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m37990_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m37991_gshared (Dictionary_2_t6765 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m37991(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6765 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m37991_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m37992_gshared (Dictionary_2_t6765 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m37992(__this, ___key, method) (( bool (*) (Dictionary_2_t6765 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m37992_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m37993_gshared (Dictionary_2_t6765 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m37993(__this, ___key, method) (( void (*) (Dictionary_2_t6765 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m37993_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37994_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37994(__this, method) (( bool (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37994_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37995_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37995(__this, method) (( Object_t * (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37995_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37996_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37996(__this, method) (( bool (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37996_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37997_gshared (Dictionary_2_t6765 * __this, KeyValuePair_2_t6762  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37997(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6765 *, KeyValuePair_2_t6762 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37997_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37998_gshared (Dictionary_2_t6765 * __this, KeyValuePair_2_t6762  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37998(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6765 *, KeyValuePair_2_t6762 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37998_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37999_gshared (Dictionary_2_t6765 * __this, KeyValuePair_2U5BU5D_t9772* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37999(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6765 *, KeyValuePair_2U5BU5D_t9772*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37999_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38000_gshared (Dictionary_2_t6765 * __this, KeyValuePair_2_t6762  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38000(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6765 *, KeyValuePair_2_t6762 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38000_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m38001_gshared (Dictionary_2_t6765 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38001(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6765 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m38001_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38002_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38002(__this, method) (( Object_t * (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38002_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38003_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38003(__this, method) (( Object_t* (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38003_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38004_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38004(__this, method) (( Object_t * (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38004_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m38005_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m38005(__this, method) (( int32_t (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_get_Count_m38005_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m38006_gshared (Dictionary_2_t6765 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m38006(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6765 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m38006_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m38007_gshared (Dictionary_2_t6765 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m38007(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6765 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m38007_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m38008_gshared (Dictionary_2_t6765 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m38008(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6765 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m38008_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m38009_gshared (Dictionary_2_t6765 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m38009(__this, ___size, method) (( void (*) (Dictionary_2_t6765 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m38009_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m38010_gshared (Dictionary_2_t6765 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m38010(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6765 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m38010_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6762  Dictionary_2_make_pair_m38011_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m38011(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6762  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m38011_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m38012_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m38012(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m38012_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m38013_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m38013(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m38013_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m38014_gshared (Dictionary_2_t6765 * __this, KeyValuePair_2U5BU5D_t9772* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m38014(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6765 *, KeyValuePair_2U5BU5D_t9772*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m38014_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m38015_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m38015(__this, method) (( void (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_Resize_m38015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m38016_gshared (Dictionary_2_t6765 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m38016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6765 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m38016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m38017_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m38017(__this, method) (( void (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_Clear_m38017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m38018_gshared (Dictionary_2_t6765 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m38018(__this, ___key, method) (( bool (*) (Dictionary_2_t6765 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m38018_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m38019_gshared (Dictionary_2_t6765 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m38019(__this, ___value, method) (( bool (*) (Dictionary_2_t6765 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m38019_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m38020_gshared (Dictionary_2_t6765 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m38020(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6765 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m38020_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m38021_gshared (Dictionary_2_t6765 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m38021(__this, ___sender, method) (( void (*) (Dictionary_2_t6765 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m38021_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m38022_gshared (Dictionary_2_t6765 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m38022(__this, ___key, method) (( bool (*) (Dictionary_2_t6765 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m38022_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m38023_gshared (Dictionary_2_t6765 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m38023(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6765 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m38023_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6766 * Dictionary_2_get_Keys_m38024_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m38024(__this, method) (( KeyCollection_t6766 * (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_get_Keys_m38024_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6770 * Dictionary_2_get_Values_m38025_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m38025(__this, method) (( ValueCollection_t6770 * (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_get_Values_m38025_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m38026_gshared (Dictionary_2_t6765 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m38026(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6765 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m38026_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m38027_gshared (Dictionary_2_t6765 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m38027(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6765 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m38027_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38028_gshared (Dictionary_2_t6765 * __this, KeyValuePair_2_t6762  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m38028(__this, ___pair, method) (( bool (*) (Dictionary_2_t6765 *, KeyValuePair_2_t6762 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m38028_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6768  Dictionary_2_GetEnumerator_m38029_gshared (Dictionary_2_t6765 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m38029(__this, method) (( Enumerator_t6768  (*) (Dictionary_2_t6765 *, const MethodInfo*))Dictionary_2_GetEnumerator_m38029_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2160  Dictionary_2_U3CCopyToU3Em__2_m38030_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m38030(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m38030_gshared)(__this /* static, unused */, ___key, ___value, method)
