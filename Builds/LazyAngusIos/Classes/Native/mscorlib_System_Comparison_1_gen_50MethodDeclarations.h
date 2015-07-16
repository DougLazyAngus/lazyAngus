#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t4017;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1218;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m27101(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4017 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17023_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m27102(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4017 *, PersistentCall_t1218 *, PersistentCall_t1218 *, const MethodInfo*))Comparison_1_Invoke_m17024_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m27103(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4017 *, PersistentCall_t1218 *, PersistentCall_t1218 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17025_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m27104(__this, ___result, method) (( int32_t (*) (Comparison_1_t4017 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17026_gshared)(__this, ___result, method)
