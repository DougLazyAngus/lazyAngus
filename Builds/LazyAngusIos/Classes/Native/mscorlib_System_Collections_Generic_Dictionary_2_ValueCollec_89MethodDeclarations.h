#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>
struct ValueCollection_t8604;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3364;
// System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/TimeType>
struct IEnumerator_1_t9703;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.TimeZoneInfo/TimeType[]
struct TimeTypeU5BU5D_t8595;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_90.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m63309_gshared (ValueCollection_t8604 * __this, Dictionary_2_t3364 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m63309(__this, ___dictionary, method) (( void (*) (ValueCollection_t8604 *, Dictionary_2_t3364 *, const MethodInfo*))ValueCollection__ctor_m63309_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m63310_gshared (ValueCollection_t8604 * __this, TimeType_t3356  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m63310(__this, ___item, method) (( void (*) (ValueCollection_t8604 *, TimeType_t3356 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m63310_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m63311_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m63311(__this, method) (( void (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m63311_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m63312_gshared (ValueCollection_t8604 * __this, TimeType_t3356  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m63312(__this, ___item, method) (( bool (*) (ValueCollection_t8604 *, TimeType_t3356 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m63312_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m63313_gshared (ValueCollection_t8604 * __this, TimeType_t3356  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m63313(__this, ___item, method) (( bool (*) (ValueCollection_t8604 *, TimeType_t3356 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m63313_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63314_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63314(__this, method) (( Object_t* (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63314_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m63315_gshared (ValueCollection_t8604 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m63315(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8604 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m63315_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m63316_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m63316(__this, method) (( Object_t * (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m63316_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m63317_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m63317(__this, method) (( bool (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m63317_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m63318_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m63318(__this, method) (( bool (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m63318_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m63319_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m63319(__this, method) (( Object_t * (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m63319_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m63320_gshared (ValueCollection_t8604 * __this, TimeTypeU5BU5D_t8595* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m63320(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8604 *, TimeTypeU5BU5D_t8595*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m63320_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C" Enumerator_t8605  ValueCollection_GetEnumerator_m63321_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m63321(__this, method) (( Enumerator_t8605  (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_GetEnumerator_m63321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m63322_gshared (ValueCollection_t8604 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m63322(__this, method) (( int32_t (*) (ValueCollection_t8604 *, const MethodInfo*))ValueCollection_get_Count_m63322_gshared)(__this, method)
