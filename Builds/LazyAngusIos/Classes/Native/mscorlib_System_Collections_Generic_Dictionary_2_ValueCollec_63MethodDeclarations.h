#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7022;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7019;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6753;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.DateTime[]
struct DateTimeU5BU5D_t4840;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_136.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_64MethodDeclarations.h"
#define ValueCollection__ctor_m44401(__this, ___dictionary, method) (( void (*) (ValueCollection_t7022 *, Dictionary_2_t7019 *, const MethodInfo*))ValueCollection__ctor_m44402_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44403(__this, ___item, method) (( void (*) (ValueCollection_t7022 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44404_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44405(__this, method) (( void (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44406_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44407(__this, ___item, method) (( bool (*) (ValueCollection_t7022 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44409(__this, ___item, method) (( bool (*) (ValueCollection_t7022 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44410_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44411(__this, method) (( Object_t* (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44412_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m44413(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7022 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m44414_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44415(__this, method) (( Object_t * (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44417(__this, method) (( bool (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44419(__this, method) (( bool (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44420_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m44421(__this, method) (( Object_t * (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m44422_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m44423(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7022 *, DateTimeU5BU5D_t4840*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m44424_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::GetEnumerator()
#define ValueCollection_GetEnumerator_m44425(__this, method) (( Enumerator_t9216  (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_GetEnumerator_m44426_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::get_Count()
#define ValueCollection_get_Count_m44427(__this, method) (( int32_t (*) (ValueCollection_t7022 *, const MethodInfo*))ValueCollection_get_Count_m44428_gshared)(__this, method)
