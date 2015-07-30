#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t8565;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t3969;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Net.Cookie>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m63065(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8565 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21448_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::Invoke(T)
#define Predicate_1_Invoke_m63066(__this, ___obj, method) (( bool (*) (Predicate_1_t8565 *, Cookie_t3969 *, const MethodInfo*))Predicate_1_Invoke_m21449_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Net.Cookie>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m63067(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8565 *, Cookie_t3969 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21450_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m63068(__this, ___result, method) (( bool (*) (Predicate_1_t8565 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21451_gshared)(__this, ___result, method)
