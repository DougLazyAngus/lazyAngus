#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t6232;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t636;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m34466_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1__ctor_m34466(__this, method) (( void (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1__ctor_m34466_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m34468_gshared (Queue_1_t6232 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m34468(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6232 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m34468_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m34470_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m34470(__this, method) (( bool (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m34470_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m34472_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m34472(__this, method) (( Object_t * (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m34472_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34474_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34474(__this, method) (( Object_t* (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34474_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m34476_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m34476(__this, method) (( Object_t * (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m34476_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m34478_gshared (Queue_1_t6232 * __this, ObjectU5BU5D_t636* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m34478(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6232 *, ObjectU5BU5D_t636*, int32_t, const MethodInfo*))Queue_1_CopyTo_m34478_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m34479_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m34479(__this, method) (( Object_t * (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_Dequeue_m34479_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m34481_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_Peek_m34481(__this, method) (( Object_t * (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_Peek_m34481_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m34482_gshared (Queue_1_t6232 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m34482(__this, ___item, method) (( void (*) (Queue_1_t6232 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m34482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m34484_gshared (Queue_1_t6232 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m34484(__this, ___new_size, method) (( void (*) (Queue_1_t6232 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m34484_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m34486_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m34486(__this, method) (( int32_t (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_get_Count_m34486_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6233  Queue_1_GetEnumerator_m34488_gshared (Queue_1_t6232 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m34488(__this, method) (( Enumerator_t6233  (*) (Queue_1_t6232 *, const MethodInfo*))Queue_1_GetEnumerator_m34488_gshared)(__this, method)
