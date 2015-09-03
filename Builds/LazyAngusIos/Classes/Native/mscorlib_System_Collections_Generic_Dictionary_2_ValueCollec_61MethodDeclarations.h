#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_t7648;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t7645;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6929;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t5416;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_141.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_62MethodDeclarations.h"
#define ValueCollection__ctor_m49502(__this, ___dictionary, method) (( void (*) (ValueCollection_t7648 *, Dictionary_2_t7645 *, const MethodInfo*))ValueCollection__ctor_m49503_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m49504(__this, ___item, method) (( void (*) (ValueCollection_t7648 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m49505_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m49506(__this, method) (( void (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m49507_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m49508(__this, ___item, method) (( bool (*) (ValueCollection_t7648 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m49509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m49510(__this, ___item, method) (( bool (*) (ValueCollection_t7648 *, double, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m49511_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m49512(__this, method) (( Object_t* (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m49513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m49514(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7648 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m49515_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m49516(__this, method) (( Object_t * (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m49517_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m49518(__this, method) (( bool (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m49519_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m49520(__this, method) (( bool (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m49521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m49522(__this, method) (( Object_t * (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m49523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m49524(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7648 *, DoubleU5BU5D_t5416*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m49525_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::GetEnumerator()
#define ValueCollection_GetEnumerator_m49526(__this, method) (( Enumerator_t9943  (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_GetEnumerator_m49527_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>::get_Count()
#define ValueCollection_get_Count_m49528(__this, method) (( int32_t (*) (ValueCollection_t7648 *, const MethodInfo*))ValueCollection_get_Count_m49529_gshared)(__this, method)
