#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>
struct ValueCollection_t8530;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3314;
// System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/TimeType>
struct IEnumerator_1_t9610;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.TimeZoneInfo/TimeType[]
struct TimeTypeU5BU5D_t8521;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_89.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m62609_gshared (ValueCollection_t8530 * __this, Dictionary_2_t3314 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m62609(__this, ___dictionary, method) (( void (*) (ValueCollection_t8530 *, Dictionary_2_t3314 *, const MethodInfo*))ValueCollection__ctor_m62609_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62610_gshared (ValueCollection_t8530 * __this, TimeType_t3306  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62610(__this, ___item, method) (( void (*) (ValueCollection_t8530 *, TimeType_t3306 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62611_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62611(__this, method) (( void (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62611_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62612_gshared (ValueCollection_t8530 * __this, TimeType_t3306  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62612(__this, ___item, method) (( bool (*) (ValueCollection_t8530 *, TimeType_t3306 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62612_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62613_gshared (ValueCollection_t8530 * __this, TimeType_t3306  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62613(__this, ___item, method) (( bool (*) (ValueCollection_t8530 *, TimeType_t3306 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62613_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62614_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62614(__this, method) (( Object_t* (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62614_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m62615_gshared (ValueCollection_t8530 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m62615(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8530 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m62615_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62616_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62616(__this, method) (( Object_t * (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62617_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62617(__this, method) (( bool (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62618_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62618(__this, method) (( bool (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62618_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m62619_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m62619(__this, method) (( Object_t * (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m62619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m62620_gshared (ValueCollection_t8530 * __this, TimeTypeU5BU5D_t8521* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m62620(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8530 *, TimeTypeU5BU5D_t8521*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m62620_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C" Enumerator_t8531  ValueCollection_GetEnumerator_m62621_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m62621(__this, method) (( Enumerator_t8531  (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_GetEnumerator_m62621_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m62622_gshared (ValueCollection_t8530 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m62622(__this, method) (( int32_t (*) (ValueCollection_t8530 *, const MethodInfo*))ValueCollection_get_Count_m62622_gshared)(__this, method)
