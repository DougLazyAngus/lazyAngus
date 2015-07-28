#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseRole>
struct Predicate_1_t6905;
// System.Object
struct Object_t;
// Parse.ParseRole
struct ParseRole_t1240;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Parse.ParseRole>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m42976(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6905 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21401_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseRole>::Invoke(T)
#define Predicate_1_Invoke_m42977(__this, ___obj, method) (( bool (*) (Predicate_1_t6905 *, ParseRole_t1240 *, const MethodInfo*))Predicate_1_Invoke_m21402_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseRole>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m42978(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6905 *, ParseRole_t1240 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21403_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseRole>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m42979(__this, ___result, method) (( bool (*) (Predicate_1_t6905 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21404_gshared)(__this, ___result, method)
