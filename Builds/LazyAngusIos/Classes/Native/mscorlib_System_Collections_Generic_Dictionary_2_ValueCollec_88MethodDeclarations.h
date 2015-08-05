#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>
struct ValueCollection_t8534;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3318;
// System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/TimeType>
struct IEnumerator_1_t9614;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.TimeZoneInfo/TimeType[]
struct TimeTypeU5BU5D_t8525;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_89.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m62637_gshared (ValueCollection_t8534 * __this, Dictionary_2_t3318 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m62637(__this, ___dictionary, method) (( void (*) (ValueCollection_t8534 *, Dictionary_2_t3318 *, const MethodInfo*))ValueCollection__ctor_m62637_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62638_gshared (ValueCollection_t8534 * __this, TimeType_t3310  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62638(__this, ___item, method) (( void (*) (ValueCollection_t8534 *, TimeType_t3310 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62639_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62639(__this, method) (( void (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62639_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62640_gshared (ValueCollection_t8534 * __this, TimeType_t3310  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62640(__this, ___item, method) (( bool (*) (ValueCollection_t8534 *, TimeType_t3310 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62640_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62641_gshared (ValueCollection_t8534 * __this, TimeType_t3310  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62641(__this, ___item, method) (( bool (*) (ValueCollection_t8534 *, TimeType_t3310 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62641_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62642_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62642(__this, method) (( Object_t* (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62642_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m62643_gshared (ValueCollection_t8534 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m62643(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8534 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m62643_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62644_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62644(__this, method) (( Object_t * (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62645_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62645(__this, method) (( bool (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62645_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62646_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62646(__this, method) (( bool (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62646_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m62647_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m62647(__this, method) (( Object_t * (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m62647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m62648_gshared (ValueCollection_t8534 * __this, TimeTypeU5BU5D_t8525* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m62648(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8534 *, TimeTypeU5BU5D_t8525*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m62648_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C" Enumerator_t8535  ValueCollection_GetEnumerator_m62649_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m62649(__this, method) (( Enumerator_t8535  (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_GetEnumerator_m62649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m62650_gshared (ValueCollection_t8534 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m62650(__this, method) (( int32_t (*) (ValueCollection_t8534 *, const MethodInfo*))ValueCollection_get_Count_m62650_gshared)(__this, method)
