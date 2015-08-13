#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t8451;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8446;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6345;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4872;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_79.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m61179_gshared (ValueCollection_t8451 * __this, Dictionary_2_t8446 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m61179(__this, ___dictionary, method) (( void (*) (ValueCollection_t8451 *, Dictionary_2_t8446 *, const MethodInfo*))ValueCollection__ctor_m61179_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m61180_gshared (ValueCollection_t8451 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m61180(__this, ___item, method) (( void (*) (ValueCollection_t8451 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m61180_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m61181_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m61181(__this, method) (( void (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m61181_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m61182_gshared (ValueCollection_t8451 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m61182(__this, ___item, method) (( bool (*) (ValueCollection_t8451 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m61182_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m61183_gshared (ValueCollection_t8451 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m61183(__this, ___item, method) (( bool (*) (ValueCollection_t8451 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m61183_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m61184_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m61184(__this, method) (( Object_t* (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m61184_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m61185_gshared (ValueCollection_t8451 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m61185(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8451 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m61185_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m61186_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m61186(__this, method) (( Object_t * (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m61186_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m61187_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m61187(__this, method) (( bool (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m61187_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m61188_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m61188(__this, method) (( bool (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m61188_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m61189_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m61189(__this, method) (( Object_t * (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m61189_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m61190_gshared (ValueCollection_t8451 * __this, Int64U5BU5D_t4872* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m61190(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8451 *, Int64U5BU5D_t4872*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m61190_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8452  ValueCollection_GetEnumerator_m61191_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m61191(__this, method) (( Enumerator_t8452  (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_GetEnumerator_m61191_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m61192_gshared (ValueCollection_t8451 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m61192(__this, method) (( int32_t (*) (ValueCollection_t8451 *, const MethodInfo*))ValueCollection_get_Count_m61192_gshared)(__this, method)
