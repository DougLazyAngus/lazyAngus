#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct Dictionary_2_t1507;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct ICollection_1_t9168;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>
struct Tuple_2_t1498;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct KeyCollection_t6256;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct ValueCollection_t6257;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5377;
// System.Collections.Generic.IDictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct IDictionary_2_t1273;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>[]
struct KeyValuePair_2U5BU5D_t9169;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>>
struct IEnumerator_1_t9170;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_50.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__46.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m7615(__this, method) (( void (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2__ctor_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34261(__this, ___comparer, method) (( void (*) (Dictionary_2_t1507 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m34262(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1507 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21789_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m34263(__this, ___capacity, method) (( void (*) (Dictionary_2_t1507 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21791_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34264(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1507 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21793_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m34265(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1507 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21795_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34266(__this, method) (( Object_t* (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21797_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34267(__this, method) (( Object_t* (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21799_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m34268(__this, method) (( Object_t * (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m34269(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1507 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21803_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m34270(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1507 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21805_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m34271(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1507 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21807_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m34272(__this, ___key, method) (( bool (*) (Dictionary_2_t1507 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21809_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m34273(__this, ___key, method) (( void (*) (Dictionary_2_t1507 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34274(__this, method) (( bool (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34275(__this, method) (( Object_t * (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34276(__this, method) (( bool (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34277(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1507 *, KeyValuePair_2_t6255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21819_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34278(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1507 *, KeyValuePair_2_t6255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21821_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34279(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1507 *, KeyValuePair_2U5BU5D_t9169*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21823_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34280(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1507 *, KeyValuePair_2_t6255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21825_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m34281(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1507 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21827_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34282(__this, method) (( Object_t * (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21829_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34283(__this, method) (( Object_t* (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21831_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34284(__this, method) (( Object_t * (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21833_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Count()
#define Dictionary_2_get_Count_m34285(__this, method) (( int32_t (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_get_Count_m21835_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Item(TKey)
#define Dictionary_2_get_Item_m34286(__this, ___key, method) (( Tuple_2_t1498 * (*) (Dictionary_2_t1507 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m34287(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1507 *, String_t*, Tuple_2_t1498 *, const MethodInfo*))Dictionary_2_set_Item_m21839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m34288(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1507 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21841_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m34289(__this, ___size, method) (( void (*) (Dictionary_2_t1507 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21843_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m34290(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1507 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21845_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m34291(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6255  (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1498 *, const MethodInfo*))Dictionary_2_make_pair_m21847_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m34292(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1498 *, const MethodInfo*))Dictionary_2_pick_key_m21849_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m34293(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1498 * (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1498 *, const MethodInfo*))Dictionary_2_pick_value_m21851_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m34294(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1507 *, KeyValuePair_2U5BU5D_t9169*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21853_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Resize()
#define Dictionary_2_Resize_m34295(__this, method) (( void (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_Resize_m21855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Add(TKey,TValue)
#define Dictionary_2_Add_m34296(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1507 *, String_t*, Tuple_2_t1498 *, const MethodInfo*))Dictionary_2_Add_m21857_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Clear()
#define Dictionary_2_Clear_m34297(__this, method) (( void (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_Clear_m21859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m34298(__this, ___key, method) (( bool (*) (Dictionary_2_t1507 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m34299(__this, ___value, method) (( bool (*) (Dictionary_2_t1507 *, Tuple_2_t1498 *, const MethodInfo*))Dictionary_2_ContainsValue_m21863_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m34300(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1507 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21865_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m34301(__this, ___sender, method) (( void (*) (Dictionary_2_t1507 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21867_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Remove(TKey)
#define Dictionary_2_Remove_m34302(__this, ___key, method) (( bool (*) (Dictionary_2_t1507 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21869_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m34303(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1507 *, String_t*, Tuple_2_t1498 **, const MethodInfo*))Dictionary_2_TryGetValue_m21871_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Keys()
#define Dictionary_2_get_Keys_m34304(__this, method) (( KeyCollection_t6256 * (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_get_Keys_m21872_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Values()
#define Dictionary_2_get_Values_m34305(__this, method) (( ValueCollection_t6257 * (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_get_Values_m21874_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m34306(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1507 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21876_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m34307(__this, ___value, method) (( Tuple_2_t1498 * (*) (Dictionary_2_t1507 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21878_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m34308(__this, ___pair, method) (( bool (*) (Dictionary_2_t1507 *, KeyValuePair_2_t6255 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21880_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m34309(__this, method) (( Enumerator_t6258  (*) (Dictionary_2_t1507 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m34310(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1498 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21883_gshared)(__this /* static, unused */, ___key, ___value, method)
