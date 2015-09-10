#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t9252;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t4357;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Net.Cookie>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m68980(__this, ___object, ___method, method) (( void (*) (Predicate_1_t9252 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26130_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::Invoke(T)
#define Predicate_1_Invoke_m68981(__this, ___obj, method) (( bool (*) (Predicate_1_t9252 *, Cookie_t4357 *, const MethodInfo*))Predicate_1_Invoke_m26131_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Net.Cookie>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m68982(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t9252 *, Cookie_t4357 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26132_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m68983(__this, ___result, method) (( bool (*) (Predicate_1_t9252 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26133_gshared)(__this, ___result, method)
