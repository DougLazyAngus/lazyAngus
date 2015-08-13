#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GP_Participant>
struct Predicate_1_t5559;
// System.Object
struct Object_t;
// GP_Participant
struct GP_Participant_t226;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<GP_Participant>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m24281(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5559 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21723_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<GP_Participant>::Invoke(T)
#define Predicate_1_Invoke_m24282(__this, ___obj, method) (( bool (*) (Predicate_1_t5559 *, GP_Participant_t226 *, const MethodInfo*))Predicate_1_Invoke_m21724_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<GP_Participant>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m24283(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5559 *, GP_Participant_t226 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21725_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<GP_Participant>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m24284(__this, ___result, method) (( bool (*) (Predicate_1_t5559 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21726_gshared)(__this, ___result, method)
