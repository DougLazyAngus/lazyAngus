#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t4024;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t1509;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Net.Cookie>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m27276(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4024 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16957_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::Invoke(T)
#define Predicate_1_Invoke_m27277(__this, ___obj, method) (( bool (*) (Predicate_1_t4024 *, Cookie_t1509 *, const MethodInfo*))Predicate_1_Invoke_m16958_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Net.Cookie>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m27278(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4024 *, Cookie_t1509 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16959_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m27279(__this, ___result, method) (( bool (*) (Predicate_1_t4024 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16960_gshared)(__this, ___result, method)
