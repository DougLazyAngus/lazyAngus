#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Tuple`2<System.Type,System.Type>>
struct Predicate_1_t6084;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1439;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m32099(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6084 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21709_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::Invoke(T)
#define Predicate_1_Invoke_m32100(__this, ___obj, method) (( bool (*) (Predicate_1_t6084 *, Tuple_2_t1439 *, const MethodInfo*))Predicate_1_Invoke_m21710_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m32101(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6084 *, Tuple_2_t1439 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21711_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m32102(__this, ___result, method) (( bool (*) (Predicate_1_t6084 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21712_gshared)(__this, ___result, method)
