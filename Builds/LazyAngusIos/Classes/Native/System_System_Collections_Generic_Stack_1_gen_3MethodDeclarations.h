#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3311;
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
extern "C" void Stack_1__ctor_m16737_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1__ctor_m16737(__this, method) (( void (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1__ctor_m16737_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m16739_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m16739(__this, method) (( bool (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m16739_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m16741_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m16741(__this, method) (( Object_t * (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m16741_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m16743_gshared (Stack_1_t3311 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m16743(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t3311 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m16743_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16745_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16745(__this, method) (( Object_t* (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16745_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m16747_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m16747(__this, method) (( Object_t * (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m16747_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m16749_gshared (Stack_1_t3311 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m16749(__this, ___t, method) (( bool (*) (Stack_1_t3311 *, Object_t *, const MethodInfo*))Stack_1_Contains_m16749_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m16750_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_Peek_m16750(__this, method) (( Object_t * (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_Peek_m16750_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m16751_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_Pop_m16751(__this, method) (( Object_t * (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_Pop_m16751_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m16752_gshared (Stack_1_t3311 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m16752(__this, ___t, method) (( void (*) (Stack_1_t3311 *, Object_t *, const MethodInfo*))Stack_1_Push_m16752_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m16754_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m16754(__this, method) (( int32_t (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_get_Count_m16754_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3313  Stack_1_GetEnumerator_m16756_gshared (Stack_1_t3311 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m16756(__this, method) (( Enumerator_t3313  (*) (Stack_1_t3311 *, const MethodInfo*))Stack_1_GetEnumerator_m16756_gshared)(__this, method)
