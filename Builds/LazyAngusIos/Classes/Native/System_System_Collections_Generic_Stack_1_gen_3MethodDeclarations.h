#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5422;
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
extern "C" void Stack_1__ctor_m21529_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1__ctor_m21529(__this, method) (( void (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1__ctor_m21529_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m21531_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m21531(__this, method) (( bool (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m21531_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m21533_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m21533(__this, method) (( Object_t * (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m21533_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m21535_gshared (Stack_1_t5422 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m21535(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t5422 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m21535_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21537_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21537(__this, method) (( Object_t* (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21537_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m21539_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m21539(__this, method) (( Object_t * (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m21539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m21541_gshared (Stack_1_t5422 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m21541(__this, ___t, method) (( bool (*) (Stack_1_t5422 *, Object_t *, const MethodInfo*))Stack_1_Contains_m21541_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m21542_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_Peek_m21542(__this, method) (( Object_t * (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_Peek_m21542_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m21543_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_Pop_m21543(__this, method) (( Object_t * (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_Pop_m21543_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m21544_gshared (Stack_1_t5422 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m21544(__this, ___t, method) (( void (*) (Stack_1_t5422 *, Object_t *, const MethodInfo*))Stack_1_Push_m21544_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m21546_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m21546(__this, method) (( int32_t (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_get_Count_m21546_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5423  Stack_1_GetEnumerator_m21548_gshared (Stack_1_t5422 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m21548(__this, method) (( Enumerator_t5423  (*) (Stack_1_t5422 *, const MethodInfo*))Stack_1_GetEnumerator_m21548_gshared)(__this, method)
