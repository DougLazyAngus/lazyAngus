#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t6307;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m35231_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1__ctor_m35231(__this, method) (( void (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1__ctor_m35231_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m35233_gshared (Queue_1_t6307 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m35233(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6307 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m35233_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m35235_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m35235(__this, method) (( bool (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m35235_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m35237_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m35237(__this, method) (( Object_t * (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m35237_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35239_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35239(__this, method) (( Object_t* (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35239_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m35241_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m35241(__this, method) (( Object_t * (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m35241_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m35243_gshared (Queue_1_t6307 * __this, ObjectU5BU5D_t680* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m35243(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6307 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))Queue_1_CopyTo_m35243_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m35244_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m35244(__this, method) (( Object_t * (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_Dequeue_m35244_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m35246_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_Peek_m35246(__this, method) (( Object_t * (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_Peek_m35246_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m35247_gshared (Queue_1_t6307 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m35247(__this, ___item, method) (( void (*) (Queue_1_t6307 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m35247_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m35249_gshared (Queue_1_t6307 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m35249(__this, ___new_size, method) (( void (*) (Queue_1_t6307 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m35249_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m35251_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m35251(__this, method) (( int32_t (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_get_Count_m35251_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6308  Queue_1_GetEnumerator_m35253_gshared (Queue_1_t6307 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m35253(__this, method) (( Enumerator_t6308  (*) (Queue_1_t6307 *, const MethodInfo*))Queue_1_GetEnumerator_m35253_gshared)(__this, method)
