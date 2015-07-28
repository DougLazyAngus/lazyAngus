#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t5930;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5925;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t626;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m30425_gshared (ValueCollection_t5930 * __this, Dictionary_2_t5925 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m30425(__this, ___dictionary, method) (( void (*) (ValueCollection_t5930 *, Dictionary_2_t5925 *, const MethodInfo*))ValueCollection__ctor_m30425_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30426_gshared (ValueCollection_t5930 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30426(__this, ___item, method) (( void (*) (ValueCollection_t5930 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30427_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30427(__this, method) (( void (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30428_gshared (ValueCollection_t5930 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30428(__this, ___item, method) (( bool (*) (ValueCollection_t5930 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30428_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30429_gshared (ValueCollection_t5930 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30429(__this, ___item, method) (( bool (*) (ValueCollection_t5930 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30429_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30430_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30430(__this, method) (( Object_t* (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30430_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m30431_gshared (ValueCollection_t5930 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m30431(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5930 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m30431_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30432_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30432(__this, method) (( Object_t * (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30433_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30433(__this, method) (( bool (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30433_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30434_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30434(__this, method) (( bool (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m30435_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m30435(__this, method) (( Object_t * (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m30435_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m30436_gshared (ValueCollection_t5930 * __this, ObjectU5BU5D_t626* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m30436(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5930 *, ObjectU5BU5D_t626*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m30436_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t5931  ValueCollection_GetEnumerator_m30437_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m30437(__this, method) (( Enumerator_t5931  (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_GetEnumerator_m30437_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m30438_gshared (ValueCollection_t5930 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m30438(__this, method) (( int32_t (*) (ValueCollection_t5930 *, const MethodInfo*))ValueCollection_get_Count_m30438_gshared)(__this, method)
