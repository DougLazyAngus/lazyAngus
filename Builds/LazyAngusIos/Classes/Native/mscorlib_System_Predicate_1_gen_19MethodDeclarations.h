#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.RBTree/Node>
struct Predicate_1_t3622;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t1935;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m21747(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3622 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17541_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.RBTree/Node>::Invoke(T)
#define Predicate_1_Invoke_m21748(__this, ___obj, method) (( bool (*) (Predicate_1_t3622 *, Node_t1935 *, const MethodInfo*))Predicate_1_Invoke_m17542_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.RBTree/Node>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m21749(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3622 *, Node_t1935 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17543_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.RBTree/Node>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m21750(__this, ___result, method) (( bool (*) (Predicate_1_t3622 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17544_gshared)(__this, ___result, method)
