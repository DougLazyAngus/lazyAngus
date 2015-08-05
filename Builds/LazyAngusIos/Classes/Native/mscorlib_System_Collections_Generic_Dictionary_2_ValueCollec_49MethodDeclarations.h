#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t6147;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1448;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9049;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Boolean[]
struct BooleanU5BU5D_t4030;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_126.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47MethodDeclarations.h"
#define ValueCollection__ctor_m32954(__this, ___dictionary, method) (( void (*) (ValueCollection_t6147 *, Dictionary_2_t1448 *, const MethodInfo*))ValueCollection__ctor_m32891_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32955(__this, ___item, method) (( void (*) (ValueCollection_t6147 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32956(__this, method) (( void (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32893_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32957(__this, ___item, method) (( bool (*) (ValueCollection_t6147 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32894_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32958(__this, ___item, method) (( bool (*) (ValueCollection_t6147 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32895_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32959(__this, method) (( Object_t* (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32896_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m32960(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6147 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m32897_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32961(__this, method) (( Object_t * (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32962(__this, method) (( bool (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32963(__this, method) (( bool (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32900_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m32964(__this, method) (( Object_t * (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m32901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m32965(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6147 *, BooleanU5BU5D_t4030*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m32902_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::GetEnumerator()
#define ValueCollection_GetEnumerator_m32966(__this, method) (( Enumerator_t9050  (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_GetEnumerator_m32903_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::get_Count()
#define ValueCollection_get_Count_m32967(__this, method) (( int32_t (*) (ValueCollection_t6147 *, const MethodInfo*))ValueCollection_get_Count_m32904_gshared)(__this, method)
