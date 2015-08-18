#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t7057;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t7054;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6365;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Single[]
struct SingleU5BU5D_t586;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_136.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_59MethodDeclarations.h"
#define ValueCollection__ctor_m44523(__this, ___dictionary, method) (( void (*) (ValueCollection_t7057 *, Dictionary_2_t7054 *, const MethodInfo*))ValueCollection__ctor_m44524_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44525(__this, ___item, method) (( void (*) (ValueCollection_t7057 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44527(__this, method) (( void (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44528_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44529(__this, ___item, method) (( bool (*) (ValueCollection_t7057 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44530_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44531(__this, ___item, method) (( bool (*) (ValueCollection_t7057 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44532_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44533(__this, method) (( Object_t* (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m44535(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7057 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m44536_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44537(__this, method) (( Object_t * (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44538_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44539(__this, method) (( bool (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44540_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44541(__this, method) (( bool (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44542_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m44543(__this, method) (( Object_t * (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m44544_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m44545(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7057 *, SingleU5BU5D_t586*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m44546_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::GetEnumerator()
#define ValueCollection_GetEnumerator_m44547(__this, method) (( Enumerator_t9303  (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_GetEnumerator_m44548_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::get_Count()
#define ValueCollection_get_Count_m44549(__this, method) (( int32_t (*) (ValueCollection_t7057 *, const MethodInfo*))ValueCollection_get_Count_m44550_gshared)(__this, method)
