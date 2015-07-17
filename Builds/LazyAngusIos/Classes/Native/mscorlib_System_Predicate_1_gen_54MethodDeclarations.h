#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t4125;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t2002;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Net.Cookie>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m28621(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4125 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17530_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::Invoke(T)
#define Predicate_1_Invoke_m28622(__this, ___obj, method) (( bool (*) (Predicate_1_t4125 *, Cookie_t2002 *, const MethodInfo*))Predicate_1_Invoke_m17531_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Net.Cookie>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m28623(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4125 *, Cookie_t2002 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17532_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Net.Cookie>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m28624(__this, ___result, method) (( bool (*) (Predicate_1_t4125 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17533_gshared)(__this, ___result, method)
