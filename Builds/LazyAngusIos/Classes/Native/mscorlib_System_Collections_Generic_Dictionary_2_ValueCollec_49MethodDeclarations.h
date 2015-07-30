#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t6143;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1444;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9045;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Boolean[]
struct BooleanU5BU5D_t4026;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_126.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47MethodDeclarations.h"
#define ValueCollection__ctor_m32923(__this, ___dictionary, method) (( void (*) (ValueCollection_t6143 *, Dictionary_2_t1444 *, const MethodInfo*))ValueCollection__ctor_m32860_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32924(__this, ___item, method) (( void (*) (ValueCollection_t6143 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32861_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32925(__this, method) (( void (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32926(__this, ___item, method) (( bool (*) (ValueCollection_t6143 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32863_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32927(__this, ___item, method) (( bool (*) (ValueCollection_t6143 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32864_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32928(__this, method) (( Object_t* (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m32929(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6143 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m32866_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32930(__this, method) (( Object_t * (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32867_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32931(__this, method) (( bool (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32868_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32932(__this, method) (( bool (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m32933(__this, method) (( Object_t * (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m32870_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m32934(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6143 *, BooleanU5BU5D_t4026*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m32871_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::GetEnumerator()
#define ValueCollection_GetEnumerator_m32935(__this, method) (( Enumerator_t9046  (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_GetEnumerator_m32872_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::get_Count()
#define ValueCollection_get_Count_m32936(__this, method) (( int32_t (*) (ValueCollection_t6143 *, const MethodInfo*))ValueCollection_get_Count_m32873_gshared)(__this, method)
