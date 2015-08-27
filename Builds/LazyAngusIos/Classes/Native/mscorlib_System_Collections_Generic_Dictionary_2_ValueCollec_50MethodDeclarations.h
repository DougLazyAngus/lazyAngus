#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t6224;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1498;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9149;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_128.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48MethodDeclarations.h"
#define ValueCollection__ctor_m33744(__this, ___dictionary, method) (( void (*) (ValueCollection_t6224 *, Dictionary_2_t1498 *, const MethodInfo*))ValueCollection__ctor_m33681_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m33745(__this, ___item, method) (( void (*) (ValueCollection_t6224 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m33682_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m33746(__this, method) (( void (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m33683_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m33747(__this, ___item, method) (( bool (*) (ValueCollection_t6224 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m33684_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m33748(__this, ___item, method) (( bool (*) (ValueCollection_t6224 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m33685_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m33749(__this, method) (( Object_t* (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m33686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m33750(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6224 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m33687_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m33751(__this, method) (( Object_t * (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m33688_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m33752(__this, method) (( bool (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m33689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m33753(__this, method) (( bool (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m33690_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m33754(__this, method) (( Object_t * (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m33691_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m33755(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6224 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m33692_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::GetEnumerator()
#define ValueCollection_GetEnumerator_m33756(__this, method) (( Enumerator_t9150  (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_GetEnumerator_m33693_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::get_Count()
#define ValueCollection_get_Count_m33757(__this, method) (( int32_t (*) (ValueCollection_t6224 *, const MethodInfo*))ValueCollection_get_Count_m33694_gshared)(__this, method)
