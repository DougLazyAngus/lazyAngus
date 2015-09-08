#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8922;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8917;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3796;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_76.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m64493_gshared (ValueCollection_t8922 * __this, Dictionary_2_t8917 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m64493(__this, ___dictionary, method) (( void (*) (ValueCollection_t8922 *, Dictionary_2_t8917 *, const MethodInfo*))ValueCollection__ctor_m64493_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m64494_gshared (ValueCollection_t8922 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m64494(__this, ___item, method) (( void (*) (ValueCollection_t8922 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m64494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m64495_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m64495(__this, method) (( void (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m64495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m64496_gshared (ValueCollection_t8922 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m64496(__this, ___item, method) (( bool (*) (ValueCollection_t8922 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m64496_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m64497_gshared (ValueCollection_t8922 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m64497(__this, ___item, method) (( bool (*) (ValueCollection_t8922 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m64497_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m64498_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m64498(__this, method) (( Object_t* (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m64498_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m64499_gshared (ValueCollection_t8922 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m64499(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8922 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m64499_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m64500_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m64500(__this, method) (( Object_t * (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m64500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m64501_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m64501(__this, method) (( bool (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m64501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m64502_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m64502(__this, method) (( bool (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m64502_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m64503_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m64503(__this, method) (( Object_t * (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m64503_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m64504_gshared (ValueCollection_t8922 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m64504(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8922 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m64504_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8923  ValueCollection_GetEnumerator_m64505_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m64505(__this, method) (( Enumerator_t8923  (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_GetEnumerator_m64505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m64506_gshared (ValueCollection_t8922 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m64506(__this, method) (( int32_t (*) (ValueCollection_t8922 *, const MethodInfo*))ValueCollection_get_Count_m64506_gshared)(__this, method)
