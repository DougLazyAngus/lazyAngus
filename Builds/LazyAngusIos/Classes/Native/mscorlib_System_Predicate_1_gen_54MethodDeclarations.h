#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t4128;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2646;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m28225(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4128 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16957_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::Invoke(T)
#define Predicate_1_Invoke_m28226(__this, ___obj, method) (( bool (*) (Predicate_1_t4128 *, StrongName_t2646 *, const MethodInfo*))Predicate_1_Invoke_m16958_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Security.Policy.StrongName>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m28227(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4128 *, StrongName_t2646 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16959_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m28228(__this, ___result, method) (( bool (*) (Predicate_1_t4128 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16960_gshared)(__this, ___result, method)
