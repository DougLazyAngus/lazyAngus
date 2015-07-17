#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GP_Participant>
struct Predicate_1_t3532;
// System.Object
struct Object_t;
// GP_Participant
struct GP_Participant_t184;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<GP_Participant>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m20139(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3532 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17530_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<GP_Participant>::Invoke(T)
#define Predicate_1_Invoke_m20140(__this, ___obj, method) (( bool (*) (Predicate_1_t3532 *, GP_Participant_t184 *, const MethodInfo*))Predicate_1_Invoke_m17531_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<GP_Participant>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m20141(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3532 *, GP_Participant_t184 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17532_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<GP_Participant>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m20142(__this, ___result, method) (( bool (*) (Predicate_1_t3532 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17533_gshared)(__this, ___result, method)
