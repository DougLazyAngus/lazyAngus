#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.RBTree/Node>
struct Comparison_1_t5593;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3893;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m25641(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5593 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.RBTree/Node>::Invoke(T,T)
#define Comparison_1_Invoke_m25642(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5593 *, Node_t3893 *, Node_t3893 *, const MethodInfo*))Comparison_1_Invoke_m21430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.RBTree/Node>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m25643(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5593 *, Node_t3893 *, Node_t3893 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.RBTree/Node>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m25644(__this, ___result, method) (( int32_t (*) (Comparison_1_t5593 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21432_gshared)(__this, ___result, method)
