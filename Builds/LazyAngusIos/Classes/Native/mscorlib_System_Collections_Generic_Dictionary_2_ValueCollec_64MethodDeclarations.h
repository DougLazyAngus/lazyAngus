#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7037;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7032;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6760;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.DateTime[]
struct DateTimeU5BU5D_t4847;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_65.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m44449_gshared (ValueCollection_t7037 * __this, Dictionary_2_t7032 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m44449(__this, ___dictionary, method) (( void (*) (ValueCollection_t7037 *, Dictionary_2_t7032 *, const MethodInfo*))ValueCollection__ctor_m44449_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44451_gshared (ValueCollection_t7037 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44451(__this, ___item, method) (( void (*) (ValueCollection_t7037 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44451_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44453_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44453(__this, method) (( void (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44453_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44455_gshared (ValueCollection_t7037 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44455(__this, ___item, method) (( bool (*) (ValueCollection_t7037 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44455_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44457_gshared (ValueCollection_t7037 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44457(__this, ___item, method) (( bool (*) (ValueCollection_t7037 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44457_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44459_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44459(__this, method) (( Object_t* (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44459_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m44461_gshared (ValueCollection_t7037 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m44461(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7037 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m44461_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44463_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44463(__this, method) (( Object_t * (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44463_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44465_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44465(__this, method) (( bool (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44467_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44467(__this, method) (( bool (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44467_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m44469_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m44469(__this, method) (( Object_t * (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m44469_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m44471_gshared (ValueCollection_t7037 * __this, DateTimeU5BU5D_t4847* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m44471(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7037 *, DateTimeU5BU5D_t4847*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m44471_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7038  ValueCollection_GetEnumerator_m44473_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m44473(__this, method) (( Enumerator_t7038  (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_GetEnumerator_m44473_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m44475_gshared (ValueCollection_t7037 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m44475(__this, method) (( int32_t (*) (ValueCollection_t7037 *, const MethodInfo*))ValueCollection_get_Count_m44475_gshared)(__this, method)
