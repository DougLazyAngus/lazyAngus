#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t5735;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t352;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m27774(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5735 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21471_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::Invoke(T)
#define Predicate_1_Invoke_m27775(__this, ___obj, method) (( bool (*) (Predicate_1_t5735 *, GameObject_t352 *, const MethodInfo*))Predicate_1_Invoke_m21472_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.GameObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m27776(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5735 *, GameObject_t352 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21473_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m27777(__this, ___result, method) (( bool (*) (Predicate_1_t5735 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21474_gshared)(__this, ___result, method)
