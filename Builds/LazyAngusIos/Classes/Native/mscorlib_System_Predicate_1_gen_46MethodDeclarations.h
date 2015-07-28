#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Tuple`2<System.Type,System.Type>>
struct Predicate_1_t5998;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1382;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m31257(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5998 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21401_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::Invoke(T)
#define Predicate_1_Invoke_m31258(__this, ___obj, method) (( bool (*) (Predicate_1_t5998 *, Tuple_2_t1382 *, const MethodInfo*))Predicate_1_Invoke_m21402_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m31259(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5998 *, Tuple_2_t1382 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21403_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Tuple`2<System.Type,System.Type>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m31260(__this, ___result, method) (( bool (*) (Predicate_1_t5998 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21404_gshared)(__this, ___result, method)
