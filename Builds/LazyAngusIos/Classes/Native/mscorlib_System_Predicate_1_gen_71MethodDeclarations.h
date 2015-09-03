#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseRole>
struct Predicate_1_t7557;
// System.Object
struct Object_t;
// Parse.ParseRole
struct ParseRole_t1317;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Parse.ParseRole>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m48426(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7557 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26060_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseRole>::Invoke(T)
#define Predicate_1_Invoke_m48427(__this, ___obj, method) (( bool (*) (Predicate_1_t7557 *, ParseRole_t1317 *, const MethodInfo*))Predicate_1_Invoke_m26061_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseRole>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m48428(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7557 *, ParseRole_t1317 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26062_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseRole>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m48429(__this, ___result, method) (( bool (*) (Predicate_1_t7557 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26063_gshared)(__this, ___result, method)
