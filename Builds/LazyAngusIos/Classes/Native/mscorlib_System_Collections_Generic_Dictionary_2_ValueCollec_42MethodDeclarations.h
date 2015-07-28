#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct ValueCollection_t6020;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1165;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t8998;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Type[]
struct TypeU5BU5D_t1142;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_123.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m31586(__this, ___dictionary, method) (( void (*) (ValueCollection_t6020 *, Dictionary_2_t1165 *, const MethodInfo*))ValueCollection__ctor_m21625_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m31587(__this, ___item, method) (( void (*) (ValueCollection_t6020 *, Type_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m31588(__this, method) (( void (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m31589(__this, ___item, method) (( bool (*) (ValueCollection_t6020 *, Type_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21628_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m31590(__this, ___item, method) (( bool (*) (ValueCollection_t6020 *, Type_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21629_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m31591(__this, method) (( Object_t* (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m31592(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6020 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21631_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m31593(__this, method) (( Object_t * (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21632_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m31594(__this, method) (( bool (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m31595(__this, method) (( bool (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m31596(__this, method) (( Object_t * (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m31597(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6020 *, TypeU5BU5D_t1142*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21636_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::GetEnumerator()
#define ValueCollection_GetEnumerator_m31598(__this, method) (( Enumerator_t8999  (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_GetEnumerator_m21637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Count()
#define ValueCollection_get_Count_m31599(__this, method) (( int32_t (*) (ValueCollection_t6020 *, const MethodInfo*))ValueCollection_get_Count_m21638_gshared)(__this, method)
