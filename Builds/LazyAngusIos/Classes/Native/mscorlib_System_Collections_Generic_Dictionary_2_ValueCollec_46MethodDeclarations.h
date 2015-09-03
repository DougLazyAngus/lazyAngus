#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6764;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6759;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6880;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m38044_gshared (ValueCollection_t6764 * __this, Dictionary_2_t6759 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m38044(__this, ___dictionary, method) (( void (*) (ValueCollection_t6764 *, Dictionary_2_t6759 *, const MethodInfo*))ValueCollection__ctor_m38044_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m38045_gshared (ValueCollection_t6764 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m38045(__this, ___item, method) (( void (*) (ValueCollection_t6764 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m38045_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m38046_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m38046(__this, method) (( void (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m38046_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m38047_gshared (ValueCollection_t6764 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m38047(__this, ___item, method) (( bool (*) (ValueCollection_t6764 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m38047_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m38048_gshared (ValueCollection_t6764 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m38048(__this, ___item, method) (( bool (*) (ValueCollection_t6764 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m38048_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m38049_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m38049(__this, method) (( Object_t* (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m38049_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m38050_gshared (ValueCollection_t6764 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m38050(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6764 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m38050_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m38051_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m38051(__this, method) (( Object_t * (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m38051_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m38052_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m38052(__this, method) (( bool (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m38052_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m38053_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m38053(__this, method) (( bool (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m38053_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m38054_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m38054(__this, method) (( Object_t * (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m38054_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m38055_gshared (ValueCollection_t6764 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m38055(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6764 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m38055_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6765  ValueCollection_GetEnumerator_m38056_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m38056(__this, method) (( Enumerator_t6765  (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_GetEnumerator_m38056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m38057_gshared (ValueCollection_t6764 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m38057(__this, method) (( int32_t (*) (ValueCollection_t6764 *, const MethodInfo*))ValueCollection_get_Count_m38057_gshared)(__this, method)
