#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_t7003;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t7000;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6286;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t4825;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_135.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_61MethodDeclarations.h"
#define ValueCollection__ctor_m44097(__this, ___dictionary, method) (( void (*) (ValueCollection_t7003 *, Dictionary_2_t7000 *, const MethodInfo*))ValueCollection__ctor_m44098_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44099(__this, ___item, method) (( void (*) (ValueCollection_t7003 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44100_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44101(__this, method) (( void (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44102_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44103(__this, ___item, method) (( bool (*) (ValueCollection_t7003 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44105(__this, ___item, method) (( bool (*) (ValueCollection_t7003 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44106_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44107(__this, method) (( Object_t* (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44108_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m44109(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7003 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m44110_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44111(__this, method) (( Object_t * (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44112_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44113(__this, method) (( bool (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44115(__this, method) (( bool (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44116_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m44117(__this, method) (( Object_t * (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m44118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m44119(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7003 *, DoubleU5BU5D_t4825*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m44120_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::GetEnumerator()
#define ValueCollection_GetEnumerator_m44121(__this, method) (( Enumerator_t9215  (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_GetEnumerator_m44122_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::get_Count()
#define ValueCollection_get_Count_m44123(__this, method) (( int32_t (*) (ValueCollection_t7003 *, const MethodInfo*))ValueCollection_get_Count_m44124_gshared)(__this, method)
