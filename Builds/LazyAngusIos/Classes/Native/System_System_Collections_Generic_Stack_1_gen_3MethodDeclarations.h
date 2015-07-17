#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3365;
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
extern "C" void Stack_1__ctor_m17335_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1__ctor_m17335(__this, method) (( void (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1__ctor_m17335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m17337_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m17337(__this, method) (( bool (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m17337_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m17339_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m17339(__this, method) (( Object_t * (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m17339_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m17341_gshared (Stack_1_t3365 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m17341(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t3365 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m17341_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17343_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17343(__this, method) (( Object_t* (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17343_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m17345_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m17345(__this, method) (( Object_t * (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m17345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m17347_gshared (Stack_1_t3365 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m17347(__this, ___t, method) (( bool (*) (Stack_1_t3365 *, Object_t *, const MethodInfo*))Stack_1_Contains_m17347_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m17348_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_Peek_m17348(__this, method) (( Object_t * (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_Peek_m17348_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m17349_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_Pop_m17349(__this, method) (( Object_t * (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_Pop_m17349_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m17350_gshared (Stack_1_t3365 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m17350(__this, ___t, method) (( void (*) (Stack_1_t3365 *, Object_t *, const MethodInfo*))Stack_1_Push_m17350_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m17352_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m17352(__this, method) (( int32_t (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_get_Count_m17352_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3367  Stack_1_GetEnumerator_m17354_gshared (Stack_1_t3365 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m17354(__this, method) (( Enumerator_t3367  (*) (Stack_1_t3365 *, const MethodInfo*))Stack_1_GetEnumerator_m17354_gshared)(__this, method)
