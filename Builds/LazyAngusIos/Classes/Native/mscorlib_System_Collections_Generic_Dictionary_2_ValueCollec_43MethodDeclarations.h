#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct ValueCollection_t6109;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1227;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t9109;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Type[]
struct TypeU5BU5D_t1204;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_125.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m32461(__this, ___dictionary, method) (( void (*) (ValueCollection_t6109 *, Dictionary_2_t1227 *, const MethodInfo*))ValueCollection__ctor_m21966_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32462(__this, ___item, method) (( void (*) (ValueCollection_t6109 *, Type_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21967_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32463(__this, method) (( void (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21968_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32464(__this, ___item, method) (( bool (*) (ValueCollection_t6109 *, Type_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21969_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32465(__this, ___item, method) (( bool (*) (ValueCollection_t6109 *, Type_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21970_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32466(__this, method) (( Object_t* (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m32467(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6109 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21972_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32468(__this, method) (( Object_t * (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32469(__this, method) (( bool (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21974_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32470(__this, method) (( bool (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21975_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m32471(__this, method) (( Object_t * (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21976_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m32472(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6109 *, TypeU5BU5D_t1204*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21977_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::GetEnumerator()
#define ValueCollection_GetEnumerator_m32473(__this, method) (( Enumerator_t9110  (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_GetEnumerator_m21978_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Count()
#define ValueCollection_get_Count_m32474(__this, method) (( int32_t (*) (ValueCollection_t6109 *, const MethodInfo*))ValueCollection_get_Count_m21979_gshared)(__this, method)
