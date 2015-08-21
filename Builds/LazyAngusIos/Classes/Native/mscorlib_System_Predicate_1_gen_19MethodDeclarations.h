#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.RBTree/Node>
struct Predicate_1_t5645;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3949;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Collections.Generic.RBTree/Node>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m25939(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5645 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21710_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.RBTree/Node>::Invoke(T)
#define Predicate_1_Invoke_m25940(__this, ___obj, method) (( bool (*) (Predicate_1_t5645 *, Node_t3949 *, const MethodInfo*))Predicate_1_Invoke_m21711_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.RBTree/Node>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m25941(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5645 *, Node_t3949 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21712_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.RBTree/Node>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m25942(__this, ___result, method) (( bool (*) (Predicate_1_t5645 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21713_gshared)(__this, ___result, method)
