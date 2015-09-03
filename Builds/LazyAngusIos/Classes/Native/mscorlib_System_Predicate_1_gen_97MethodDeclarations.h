#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>
struct Predicate_1_t8923;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1189;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m64597(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8923 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26060_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>::Invoke(T)
#define Predicate_1_Invoke_m64598(__this, ___obj, method) (( bool (*) (Predicate_1_t8923 *, Action_1_t1189 *, const MethodInfo*))Predicate_1_Invoke_m26061_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m64599(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8923 *, Action_1_t1189 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26062_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m64600(__this, ___result, method) (( bool (*) (Predicate_1_t8923 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26063_gshared)(__this, ___result, method)
