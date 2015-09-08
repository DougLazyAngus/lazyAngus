#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t6873;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t697;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m39857_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1__ctor_m39857(__this, method) (( void (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1__ctor_m39857_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m39859_gshared (Queue_1_t6873 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m39859(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6873 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m39859_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m39861_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m39861(__this, method) (( bool (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m39861_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m39863_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m39863(__this, method) (( Object_t * (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m39863_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39865_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39865(__this, method) (( Object_t* (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39865_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m39867_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m39867(__this, method) (( Object_t * (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m39867_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m39869_gshared (Queue_1_t6873 * __this, ObjectU5BU5D_t697* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m39869(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6873 *, ObjectU5BU5D_t697*, int32_t, const MethodInfo*))Queue_1_CopyTo_m39869_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m39870_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m39870(__this, method) (( Object_t * (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_Dequeue_m39870_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m39872_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_Peek_m39872(__this, method) (( Object_t * (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_Peek_m39872_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m39873_gshared (Queue_1_t6873 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m39873(__this, ___item, method) (( void (*) (Queue_1_t6873 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m39873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m39875_gshared (Queue_1_t6873 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m39875(__this, ___new_size, method) (( void (*) (Queue_1_t6873 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m39875_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m39877_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m39877(__this, method) (( int32_t (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_get_Count_m39877_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6874  Queue_1_GetEnumerator_m39879_gshared (Queue_1_t6873 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m39879(__this, method) (( Enumerator_t6874  (*) (Queue_1_t6873 *, const MethodInfo*))Queue_1_GetEnumerator_m39879_gshared)(__this, method)
