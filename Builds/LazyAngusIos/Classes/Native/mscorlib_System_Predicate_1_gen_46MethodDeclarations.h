#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t5991;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m31047(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5991 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21710_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Threading.Tasks.Task>::Invoke(T)
#define Predicate_1_Invoke_m31048(__this, ___obj, method) (( bool (*) (Predicate_1_t5991 *, Task_t1208 *, const MethodInfo*))Predicate_1_Invoke_m21711_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Threading.Tasks.Task>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m31049(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5991 *, Task_t1208 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21712_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m31050(__this, ___result, method) (( bool (*) (Predicate_1_t5991 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21713_gshared)(__this, ___result, method)
