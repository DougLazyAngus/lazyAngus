#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7031;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7028;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6762;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.DateTime[]
struct DateTimeU5BU5D_t4849;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_136.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_64MethodDeclarations.h"
#define ValueCollection__ctor_m44464(__this, ___dictionary, method) (( void (*) (ValueCollection_t7031 *, Dictionary_2_t7028 *, const MethodInfo*))ValueCollection__ctor_m44465_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44466(__this, ___item, method) (( void (*) (ValueCollection_t7031 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44468(__this, method) (( void (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44469_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44470(__this, ___item, method) (( bool (*) (ValueCollection_t7031 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44472(__this, ___item, method) (( bool (*) (ValueCollection_t7031 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44473_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44474(__this, method) (( Object_t* (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m44476(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7031 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m44477_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44478(__this, method) (( Object_t * (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44480(__this, method) (( bool (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44481_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44482(__this, method) (( bool (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44483_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m44484(__this, method) (( Object_t * (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m44485_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m44486(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7031 *, DateTimeU5BU5D_t4849*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m44487_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::GetEnumerator()
#define ValueCollection_GetEnumerator_m44488(__this, method) (( Enumerator_t9225  (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_GetEnumerator_m44489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::get_Count()
#define ValueCollection_get_Count_m44490(__this, method) (( int32_t (*) (ValueCollection_t7031 *, const MethodInfo*))ValueCollection_get_Count_m44491_gshared)(__this, method)
