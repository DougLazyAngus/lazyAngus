#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Rigidbody2D>
struct Predicate_1_t3919;
// System.Object
struct Object_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1142;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Rigidbody2D>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m26121(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3919 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17538_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Rigidbody2D>::Invoke(T)
#define Predicate_1_Invoke_m26122(__this, ___obj, method) (( bool (*) (Predicate_1_t3919 *, Rigidbody2D_t1142 *, const MethodInfo*))Predicate_1_Invoke_m17539_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Rigidbody2D>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m26123(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3919 *, Rigidbody2D_t1142 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17540_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Rigidbody2D>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m26124(__this, ___result, method) (( bool (*) (Predicate_1_t3919 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17541_gshared)(__this, ___result, method)
