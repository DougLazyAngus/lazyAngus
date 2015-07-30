#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5374;
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
extern "C" void Stack_1__ctor_m21255_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1__ctor_m21255(__this, method) (( void (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1__ctor_m21255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m21257_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m21257(__this, method) (( bool (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m21257_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m21259_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m21259(__this, method) (( Object_t * (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m21259_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m21261_gshared (Stack_1_t5374 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m21261(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t5374 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m21261_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21263_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21263(__this, method) (( Object_t* (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21263_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m21265_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m21265(__this, method) (( Object_t * (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m21265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m21267_gshared (Stack_1_t5374 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m21267(__this, ___t, method) (( bool (*) (Stack_1_t5374 *, Object_t *, const MethodInfo*))Stack_1_Contains_m21267_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m21268_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_Peek_m21268(__this, method) (( Object_t * (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_Peek_m21268_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m21269_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_Pop_m21269(__this, method) (( Object_t * (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_Pop_m21269_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m21270_gshared (Stack_1_t5374 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m21270(__this, ___t, method) (( void (*) (Stack_1_t5374 *, Object_t *, const MethodInfo*))Stack_1_Push_m21270_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m21272_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m21272(__this, method) (( int32_t (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_get_Count_m21272_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5375  Stack_1_GetEnumerator_m21274_gshared (Stack_1_t5374 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m21274(__this, method) (( Enumerator_t5375  (*) (Stack_1_t5374 *, const MethodInfo*))Stack_1_GetEnumerator_m21274_gshared)(__this, method)
