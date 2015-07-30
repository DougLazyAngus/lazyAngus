#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t6229;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m34443_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1__ctor_m34443(__this, method) (( void (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1__ctor_m34443_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m34445_gshared (Queue_1_t6229 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m34445(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6229 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m34445_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m34447_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m34447(__this, method) (( bool (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m34447_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m34449_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m34449(__this, method) (( Object_t * (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m34449_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34451_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34451(__this, method) (( Object_t* (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34451_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m34453_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m34453(__this, method) (( Object_t * (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m34453_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m34455_gshared (Queue_1_t6229 * __this, ObjectU5BU5D_t634* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m34455(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6229 *, ObjectU5BU5D_t634*, int32_t, const MethodInfo*))Queue_1_CopyTo_m34455_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m34456_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m34456(__this, method) (( Object_t * (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_Dequeue_m34456_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m34458_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_Peek_m34458(__this, method) (( Object_t * (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_Peek_m34458_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m34459_gshared (Queue_1_t6229 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m34459(__this, ___item, method) (( void (*) (Queue_1_t6229 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m34459_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m34461_gshared (Queue_1_t6229 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m34461(__this, ___new_size, method) (( void (*) (Queue_1_t6229 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m34461_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m34463_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m34463(__this, method) (( int32_t (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_get_Count_m34463_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6230  Queue_1_GetEnumerator_m34465_gshared (Queue_1_t6229 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m34465(__this, method) (( Enumerator_t6230  (*) (Queue_1_t6229 *, const MethodInfo*))Queue_1_GetEnumerator_m34465_gshared)(__this, method)
