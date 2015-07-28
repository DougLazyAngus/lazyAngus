#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8258;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8971;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8624;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8259;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8263;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5923;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t8254;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9471;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t9472;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__61.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m58916_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m58916(__this, method) (( void (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2__ctor_m58916_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m58917_gshared (Dictionary_2_t8258 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m58917(__this, ___comparer, method) (( void (*) (Dictionary_2_t8258 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m58917_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m58918_gshared (Dictionary_2_t8258 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m58918(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8258 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m58918_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m58919_gshared (Dictionary_2_t8258 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m58919(__this, ___capacity, method) (( void (*) (Dictionary_2_t8258 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m58919_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m58920_gshared (Dictionary_2_t8258 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m58920(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8258 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m58920_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m58921_gshared (Dictionary_2_t8258 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m58921(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8258 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m58921_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58922_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58922(__this, method) (( Object_t* (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58922_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58923_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58923(__this, method) (( Object_t* (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58923_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m58924_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m58924(__this, method) (( Object_t * (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m58924_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m58925_gshared (Dictionary_2_t8258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m58925(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8258 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m58925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m58926_gshared (Dictionary_2_t8258 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m58926(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8258 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m58926_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m58927_gshared (Dictionary_2_t8258 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m58927(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8258 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m58927_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m58928_gshared (Dictionary_2_t8258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m58928(__this, ___key, method) (( bool (*) (Dictionary_2_t8258 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m58928_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m58929_gshared (Dictionary_2_t8258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m58929(__this, ___key, method) (( void (*) (Dictionary_2_t8258 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m58929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m58930_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m58930(__this, method) (( bool (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m58930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m58931_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m58931(__this, method) (( Object_t * (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m58931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m58932_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m58932(__this, method) (( bool (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m58932_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m58933_gshared (Dictionary_2_t8258 * __this, KeyValuePair_2_t8255  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m58933(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8258 *, KeyValuePair_2_t8255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m58933_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m58934_gshared (Dictionary_2_t8258 * __this, KeyValuePair_2_t8255  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m58934(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8258 *, KeyValuePair_2_t8255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m58934_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58935_gshared (Dictionary_2_t8258 * __this, KeyValuePair_2U5BU5D_t9471* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58935(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8258 *, KeyValuePair_2U5BU5D_t9471*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58935_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m58936_gshared (Dictionary_2_t8258 * __this, KeyValuePair_2_t8255  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m58936(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8258 *, KeyValuePair_2_t8255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m58936_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m58937_gshared (Dictionary_2_t8258 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m58937(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8258 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m58937_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m58938_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m58938(__this, method) (( Object_t * (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m58938_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m58939_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m58939(__this, method) (( Object_t* (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m58939_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m58940_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m58940(__this, method) (( Object_t * (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m58940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m58941_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m58941(__this, method) (( int32_t (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_get_Count_m58941_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m58942_gshared (Dictionary_2_t8258 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m58942(__this, ___key, method) (( int32_t (*) (Dictionary_2_t8258 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m58942_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m58943_gshared (Dictionary_2_t8258 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m58943(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8258 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m58943_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m58944_gshared (Dictionary_2_t8258 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m58944(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8258 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m58944_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m58945_gshared (Dictionary_2_t8258 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m58945(__this, ___size, method) (( void (*) (Dictionary_2_t8258 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m58945_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m58946_gshared (Dictionary_2_t8258 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m58946(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8258 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m58946_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8255  Dictionary_2_make_pair_m58947_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m58947(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8255  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m58947_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m58948_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m58948(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m58948_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m58949_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m58949(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m58949_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m58950_gshared (Dictionary_2_t8258 * __this, KeyValuePair_2U5BU5D_t9471* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m58950(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8258 *, KeyValuePair_2U5BU5D_t9471*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m58950_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m58951_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m58951(__this, method) (( void (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_Resize_m58951_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m58952_gshared (Dictionary_2_t8258 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m58952(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8258 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m58952_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m58953_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m58953(__this, method) (( void (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_Clear_m58953_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m58954_gshared (Dictionary_2_t8258 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m58954(__this, ___key, method) (( bool (*) (Dictionary_2_t8258 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m58954_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m58955_gshared (Dictionary_2_t8258 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m58955(__this, ___value, method) (( bool (*) (Dictionary_2_t8258 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m58955_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m58956_gshared (Dictionary_2_t8258 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m58956(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8258 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m58956_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m58957_gshared (Dictionary_2_t8258 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m58957(__this, ___sender, method) (( void (*) (Dictionary_2_t8258 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m58957_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m58958_gshared (Dictionary_2_t8258 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m58958(__this, ___key, method) (( bool (*) (Dictionary_2_t8258 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m58958_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m58959_gshared (Dictionary_2_t8258 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m58959(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8258 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m58959_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8259 * Dictionary_2_get_Keys_m58960_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m58960(__this, method) (( KeyCollection_t8259 * (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_get_Keys_m58960_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8263 * Dictionary_2_get_Values_m58961_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m58961(__this, method) (( ValueCollection_t8263 * (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_get_Values_m58961_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m58962_gshared (Dictionary_2_t8258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m58962(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8258 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m58962_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m58963_gshared (Dictionary_2_t8258 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m58963(__this, ___value, method) (( int32_t (*) (Dictionary_2_t8258 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m58963_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m58964_gshared (Dictionary_2_t8258 * __this, KeyValuePair_2_t8255  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m58964(__this, ___pair, method) (( bool (*) (Dictionary_2_t8258 *, KeyValuePair_2_t8255 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m58964_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8261  Dictionary_2_GetEnumerator_m58965_gshared (Dictionary_2_t8258 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m58965(__this, method) (( Enumerator_t8261  (*) (Dictionary_2_t8258 *, const MethodInfo*))Dictionary_2_GetEnumerator_m58965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m58966_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m58966(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m58966_gshared)(__this /* static, unused */, ___key, ___value, method)
