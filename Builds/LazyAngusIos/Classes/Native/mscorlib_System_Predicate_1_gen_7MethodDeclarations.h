#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t6042;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t700;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m27218(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6042 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26130_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::Invoke(T)
#define Predicate_1_Invoke_m27219(__this, ___obj, method) (( bool (*) (Predicate_1_t6042 *, EventHandlerFunction_t700 *, const MethodInfo*))Predicate_1_Invoke_m26131_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m27220(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6042 *, EventHandlerFunction_t700 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26132_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m27221(__this, ___result, method) (( bool (*) (Predicate_1_t6042 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26133_gshared)(__this, ___result, method)
