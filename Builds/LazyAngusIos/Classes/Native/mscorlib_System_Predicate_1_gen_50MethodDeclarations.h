#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Type>
struct Predicate_1_t4055;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m27881(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4055 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17545_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Type>::Invoke(T)
#define Predicate_1_Invoke_m27882(__this, ___obj, method) (( bool (*) (Predicate_1_t4055 *, Type_t *, const MethodInfo*))Predicate_1_Invoke_m17546_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Type>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m27883(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4055 *, Type_t *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17547_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Type>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m27884(__this, ___result, method) (( bool (*) (Predicate_1_t4055 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17548_gshared)(__this, ___result, method)
