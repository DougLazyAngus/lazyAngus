#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t7628;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t7625;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6934;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Single[]
struct SingleU5BU5D_t587;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_140.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_59MethodDeclarations.h"
#define ValueCollection__ctor_m49229(__this, ___dictionary, method) (( void (*) (ValueCollection_t7628 *, Dictionary_2_t7625 *, const MethodInfo*))ValueCollection__ctor_m49230_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m49231(__this, ___item, method) (( void (*) (ValueCollection_t7628 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m49232_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m49233(__this, method) (( void (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m49234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m49235(__this, ___item, method) (( bool (*) (ValueCollection_t7628 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m49236_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m49237(__this, ___item, method) (( bool (*) (ValueCollection_t7628 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m49238_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m49239(__this, method) (( Object_t* (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m49240_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m49241(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7628 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m49242_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m49243(__this, method) (( Object_t * (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m49244_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m49245(__this, method) (( bool (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m49246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m49247(__this, method) (( bool (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m49248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m49249(__this, method) (( Object_t * (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m49250_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m49251(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7628 *, SingleU5BU5D_t587*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m49252_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::GetEnumerator()
#define ValueCollection_GetEnumerator_m49253(__this, method) (( Enumerator_t9938  (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_GetEnumerator_m49254_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::get_Count()
#define ValueCollection_get_Count_m49255(__this, method) (( int32_t (*) (ValueCollection_t7628 *, const MethodInfo*))ValueCollection_get_Count_m49256_gshared)(__this, method)
