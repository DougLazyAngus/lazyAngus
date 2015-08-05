#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.WeakReference>
struct Predicate_1_t5953;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2175;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.WeakReference>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m30638(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5953 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21476_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.WeakReference>::Invoke(T)
#define Predicate_1_Invoke_m30639(__this, ___obj, method) (( bool (*) (Predicate_1_t5953 *, WeakReference_t2175 *, const MethodInfo*))Predicate_1_Invoke_m21477_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.WeakReference>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m30640(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5953 *, WeakReference_t2175 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21478_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.WeakReference>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m30641(__this, ___result, method) (( bool (*) (Predicate_1_t5953 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21479_gshared)(__this, ___result, method)
