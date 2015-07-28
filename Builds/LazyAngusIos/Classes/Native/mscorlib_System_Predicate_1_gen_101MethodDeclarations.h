#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t8486;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2828;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m61985(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8486 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21401_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::Invoke(T)
#define Predicate_1_Invoke_m61986(__this, ___obj, method) (( bool (*) (Predicate_1_t8486 *, PersistentCall_t2828 *, const MethodInfo*))Predicate_1_Invoke_m21402_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m61987(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8486 *, PersistentCall_t2828 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21403_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m61988(__this, ___result, method) (( bool (*) (Predicate_1_t8486 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21404_gshared)(__this, ___result, method)
