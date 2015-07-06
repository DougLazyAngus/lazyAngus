#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3288;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m16582_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1__ctor_m16582(__this, method) (( void (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1__ctor_m16582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m16584_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m16584(__this, method) (( bool (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m16584_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m16586_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m16586(__this, method) (( Object_t * (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m16586_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m16588_gshared (Stack_1_t3288 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m16588(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t3288 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m16588_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16590_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16590(__this, method) (( Object_t* (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16590_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m16592_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m16592(__this, method) (( Object_t * (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m16592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m16594_gshared (Stack_1_t3288 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m16594(__this, ___t, method) (( bool (*) (Stack_1_t3288 *, Object_t *, const MethodInfo*))Stack_1_Contains_m16594_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m16595_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_Peek_m16595(__this, method) (( Object_t * (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_Peek_m16595_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m16596_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_Pop_m16596(__this, method) (( Object_t * (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_Pop_m16596_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m16597_gshared (Stack_1_t3288 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m16597(__this, ___t, method) (( void (*) (Stack_1_t3288 *, Object_t *, const MethodInfo*))Stack_1_Push_m16597_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m16599_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m16599(__this, method) (( int32_t (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_get_Count_m16599_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3290  Stack_1_GetEnumerator_m16601_gshared (Stack_1_t3288 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m16601(__this, method) (( Enumerator_t3290  (*) (Stack_1_t3288 *, const MethodInfo*))Stack_1_GetEnumerator_m16601_gshared)(__this, method)
