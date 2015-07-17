#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t4082;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1262;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m28123(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4082 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17560_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m28124(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4082 *, PersistentCall_t1262 *, PersistentCall_t1262 *, const MethodInfo*))Comparison_1_Invoke_m17561_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m28125(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4082 *, PersistentCall_t1262 *, PersistentCall_t1262 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17562_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m28126(__this, ___result, method) (( int32_t (*) (Comparison_1_t4082 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17563_gshared)(__this, ___result, method)
