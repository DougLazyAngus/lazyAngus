#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t1315;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t272;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t582;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_55.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m17923(__this, ___dictionary, method) (( void (*) (ValueCollection_t1315 *, Dictionary_2_t272 *, const MethodInfo*))ValueCollection__ctor_m17776_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17924(__this, ___item, method) (( void (*) (ValueCollection_t1315 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17777_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17925(__this, method) (( void (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17926(__this, ___item, method) (( bool (*) (ValueCollection_t1315 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17779_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17927(__this, ___item, method) (( bool (*) (ValueCollection_t1315 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17780_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17928(__this, method) (( Object_t* (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m17929(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1315 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17782_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17930(__this, method) (( Object_t * (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17931(__this, method) (( bool (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17784_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17932(__this, method) (( bool (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17785_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m17933(__this, method) (( Object_t * (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m17934(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1315 *, ObjectU5BU5D_t582*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17787_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::GetEnumerator()
#define ValueCollection_GetEnumerator_m17935(__this, method) (( Enumerator_t4232  (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_GetEnumerator_m17788_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>::get_Count()
#define ValueCollection_get_Count_m17936(__this, method) (( int32_t (*) (ValueCollection_t1315 *, const MethodInfo*))ValueCollection_get_Count_m17789_gshared)(__this, method)
