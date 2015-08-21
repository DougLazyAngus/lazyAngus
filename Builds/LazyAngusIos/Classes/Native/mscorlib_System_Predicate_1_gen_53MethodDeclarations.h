#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseObject>
struct Predicate_1_t6238;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t1219;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m34095(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6238 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21709_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseObject>::Invoke(T)
#define Predicate_1_Invoke_m34096(__this, ___obj, method) (( bool (*) (Predicate_1_t6238 *, ParseObject_t1219 *, const MethodInfo*))Predicate_1_Invoke_m21710_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m34097(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6238 *, ParseObject_t1219 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21711_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m34098(__this, ___result, method) (( bool (*) (Predicate_1_t6238 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21712_gshared)(__this, ___result, method)
