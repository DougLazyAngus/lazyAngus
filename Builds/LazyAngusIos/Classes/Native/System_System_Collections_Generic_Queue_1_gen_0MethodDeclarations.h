#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t6221;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t626;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m34396_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1__ctor_m34396(__this, method) (( void (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1__ctor_m34396_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m34398_gshared (Queue_1_t6221 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m34398(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6221 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m34398_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m34400_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m34400(__this, method) (( bool (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m34400_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m34402_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m34402(__this, method) (( Object_t * (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m34402_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34404_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34404(__this, method) (( Object_t* (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34404_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m34406_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m34406(__this, method) (( Object_t * (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m34406_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m34408_gshared (Queue_1_t6221 * __this, ObjectU5BU5D_t626* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m34408(__this, ___array, ___idx, method) (( void (*) (Queue_1_t6221 *, ObjectU5BU5D_t626*, int32_t, const MethodInfo*))Queue_1_CopyTo_m34408_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m34409_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m34409(__this, method) (( Object_t * (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_Dequeue_m34409_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m34411_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_Peek_m34411(__this, method) (( Object_t * (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_Peek_m34411_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m34412_gshared (Queue_1_t6221 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m34412(__this, ___item, method) (( void (*) (Queue_1_t6221 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m34412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m34414_gshared (Queue_1_t6221 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m34414(__this, ___new_size, method) (( void (*) (Queue_1_t6221 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m34414_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m34416_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m34416(__this, method) (( int32_t (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_get_Count_m34416_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6222  Queue_1_GetEnumerator_m34418_gshared (Queue_1_t6221 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m34418(__this, method) (( Enumerator_t6222  (*) (Queue_1_t6221 *, const MethodInfo*))Queue_1_GetEnumerator_m34418_gshared)(__this, method)
