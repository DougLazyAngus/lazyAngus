#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>
struct ValueCollection_t8523;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3307;
// System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/TimeType>
struct IEnumerator_1_t9603;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.TimeZoneInfo/TimeType[]
struct TimeTypeU5BU5D_t8514;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_89.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m62562_gshared (ValueCollection_t8523 * __this, Dictionary_2_t3307 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m62562(__this, ___dictionary, method) (( void (*) (ValueCollection_t8523 *, Dictionary_2_t3307 *, const MethodInfo*))ValueCollection__ctor_m62562_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62563_gshared (ValueCollection_t8523 * __this, TimeType_t3299  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62563(__this, ___item, method) (( void (*) (ValueCollection_t8523 *, TimeType_t3299 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62563_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62564_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62564(__this, method) (( void (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62564_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62565_gshared (ValueCollection_t8523 * __this, TimeType_t3299  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62565(__this, ___item, method) (( bool (*) (ValueCollection_t8523 *, TimeType_t3299 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62565_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62566_gshared (ValueCollection_t8523 * __this, TimeType_t3299  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62566(__this, ___item, method) (( bool (*) (ValueCollection_t8523 *, TimeType_t3299 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62566_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62567_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62567(__this, method) (( Object_t* (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62567_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m62568_gshared (ValueCollection_t8523 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m62568(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8523 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m62568_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62569_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62569(__this, method) (( Object_t * (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62570_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62570(__this, method) (( bool (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62571_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62571(__this, method) (( bool (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62571_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m62572_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m62572(__this, method) (( Object_t * (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m62572_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m62573_gshared (ValueCollection_t8523 * __this, TimeTypeU5BU5D_t8514* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m62573(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8523 *, TimeTypeU5BU5D_t8514*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m62573_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C" Enumerator_t8524  ValueCollection_GetEnumerator_m62574_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m62574(__this, method) (( Enumerator_t8524  (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_GetEnumerator_m62574_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m62575_gshared (ValueCollection_t8523 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m62575(__this, method) (( int32_t (*) (ValueCollection_t8523 *, const MethodInfo*))ValueCollection_get_Count_m62575_gshared)(__this, method)
