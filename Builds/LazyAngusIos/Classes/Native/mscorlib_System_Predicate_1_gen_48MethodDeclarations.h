#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t6569;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m35722(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6569 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26130_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Threading.Tasks.Task>::Invoke(T)
#define Predicate_1_Invoke_m35723(__this, ___obj, method) (( bool (*) (Predicate_1_t6569 *, Task_t1238 *, const MethodInfo*))Predicate_1_Invoke_m26131_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Threading.Tasks.Task>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m35724(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6569 *, Task_t1238 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26132_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m35725(__this, ___result, method) (( bool (*) (Predicate_1_t6569 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26133_gshared)(__this, ___result, method)
