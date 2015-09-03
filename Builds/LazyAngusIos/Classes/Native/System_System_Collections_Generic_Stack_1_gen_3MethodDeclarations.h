#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5972;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m25867_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1__ctor_m25867(__this, method) (( void (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1__ctor_m25867_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m25869_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m25869(__this, method) (( bool (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m25869_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m25871_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m25871(__this, method) (( Object_t * (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m25871_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m25873_gshared (Stack_1_t5972 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m25873(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t5972 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m25873_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25875_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25875(__this, method) (( Object_t* (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25875_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m25877_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m25877(__this, method) (( Object_t * (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m25877_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m25879_gshared (Stack_1_t5972 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m25879(__this, ___t, method) (( bool (*) (Stack_1_t5972 *, Object_t *, const MethodInfo*))Stack_1_Contains_m25879_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m25880_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_Peek_m25880(__this, method) (( Object_t * (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_Peek_m25880_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m25881_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_Pop_m25881(__this, method) (( Object_t * (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_Pop_m25881_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m25882_gshared (Stack_1_t5972 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m25882(__this, ___t, method) (( void (*) (Stack_1_t5972 *, Object_t *, const MethodInfo*))Stack_1_Push_m25882_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m25884_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m25884(__this, method) (( int32_t (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_get_Count_m25884_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5973  Stack_1_GetEnumerator_m25886_gshared (Stack_1_t5972 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m25886(__this, method) (( Enumerator_t5973  (*) (Stack_1_t5972 *, const MethodInfo*))Stack_1_GetEnumerator_m25886_gshared)(__this, method)
