#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t3965;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1160;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m26846(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3965 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16659_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m26847(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3965 *, PersistentCall_t1160 *, PersistentCall_t1160 *, const MethodInfo*))Comparison_1_Invoke_m16660_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m26848(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3965 *, PersistentCall_t1160 *, PersistentCall_t1160 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16661_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m26849(__this, ___result, method) (( int32_t (*) (Comparison_1_t3965 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16662_gshared)(__this, ___result, method)
