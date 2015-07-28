#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<FBAppRequest>
struct Predicate_1_t5532;
// System.Object
struct Object_t;
// FBAppRequest
struct FBAppRequest_t286;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<FBAppRequest>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m24563(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5532 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21401_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<FBAppRequest>::Invoke(T)
#define Predicate_1_Invoke_m24564(__this, ___obj, method) (( bool (*) (Predicate_1_t5532 *, FBAppRequest_t286 *, const MethodInfo*))Predicate_1_Invoke_m21402_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<FBAppRequest>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m24565(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5532 *, FBAppRequest_t286 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21403_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<FBAppRequest>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m24566(__this, ___result, method) (( bool (*) (Predicate_1_t5532 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21404_gshared)(__this, ___result, method)
