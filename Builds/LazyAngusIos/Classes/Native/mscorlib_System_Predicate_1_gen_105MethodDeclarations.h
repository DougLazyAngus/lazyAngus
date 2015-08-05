#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t8568;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t3972;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Net.Cookie>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m63088(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8568 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21471_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::Invoke(T)
#define Predicate_1_Invoke_m63089(__this, ___obj, method) (( bool (*) (Predicate_1_t8568 *, Cookie_t3972 *, const MethodInfo*))Predicate_1_Invoke_m21472_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Net.Cookie>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m63090(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8568 *, Cookie_t3972 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21473_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m63091(__this, ___result, method) (( bool (*) (Predicate_1_t8568 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21474_gshared)(__this, ___result, method)
