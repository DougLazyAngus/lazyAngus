#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6114;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6109;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6230;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_46.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m32599_gshared (ValueCollection_t6114 * __this, Dictionary_2_t6109 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m32599(__this, ___dictionary, method) (( void (*) (ValueCollection_t6114 *, Dictionary_2_t6109 *, const MethodInfo*))ValueCollection__ctor_m32599_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32600_gshared (ValueCollection_t6114 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32600(__this, ___item, method) (( void (*) (ValueCollection_t6114 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32601_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32601(__this, method) (( void (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32601_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32602_gshared (ValueCollection_t6114 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32602(__this, ___item, method) (( bool (*) (ValueCollection_t6114 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32602_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32603_gshared (ValueCollection_t6114 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32603(__this, ___item, method) (( bool (*) (ValueCollection_t6114 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32603_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32604_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32604(__this, method) (( Object_t* (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32604_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m32605_gshared (ValueCollection_t6114 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m32605(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6114 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m32605_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32606_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32606(__this, method) (( Object_t * (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32607_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32607(__this, method) (( bool (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32608_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32608(__this, method) (( bool (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32608_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m32609_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m32609(__this, method) (( Object_t * (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m32609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m32610_gshared (ValueCollection_t6114 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m32610(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6114 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m32610_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6115  ValueCollection_GetEnumerator_m32611_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m32611(__this, method) (( Enumerator_t6115  (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_GetEnumerator_m32611_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m32612_gshared (ValueCollection_t6114 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m32612(__this, method) (( int32_t (*) (ValueCollection_t6114 *, const MethodInfo*))ValueCollection_get_Count_m32612_gshared)(__this, method)
