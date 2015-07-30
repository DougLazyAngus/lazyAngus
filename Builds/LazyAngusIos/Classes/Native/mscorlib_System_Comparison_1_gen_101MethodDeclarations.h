#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t8494;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2834;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m62041(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8494 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21476_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m62042(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8494 *, PersistentCall_t2834 *, PersistentCall_t2834 *, const MethodInfo*))Comparison_1_Invoke_m21477_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m62043(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8494 *, PersistentCall_t2834 *, PersistentCall_t2834 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21478_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m62044(__this, ___result, method) (( int32_t (*) (Comparison_1_t8494 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21479_gshared)(__this, ___result, method)
