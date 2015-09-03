#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>
struct CreateValueCallback_t1200;
// System.Object
struct Object_t;
// System.IComparable
struct IComparable_t99;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::.ctor(System.Object,System.IntPtr)
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_3MethodDeclarations.h"
#define CreateValueCallback__ctor_m7522(__this, ___object, ___method, method) (( void (*) (CreateValueCallback_t1200 *, Object_t *, IntPtr_t, const MethodInfo*))CreateValueCallback__ctor_m35209_gshared)(__this, ___object, ___method, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::Invoke(TKey)
#define CreateValueCallback_Invoke_m36447(__this, ___key, method) (( Object_t * (*) (CreateValueCallback_t1200 *, Object_t *, const MethodInfo*))CreateValueCallback_Invoke_m35210_gshared)(__this, ___key, method)
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
#define CreateValueCallback_BeginInvoke_m36448(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (CreateValueCallback_t1200 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))CreateValueCallback_BeginInvoke_m35211_gshared)(__this, ___key, ___callback, ___object, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::EndInvoke(System.IAsyncResult)
#define CreateValueCallback_EndInvoke_m36449(__this, ___result, method) (( Object_t * (*) (CreateValueCallback_t1200 *, Object_t *, const MethodInfo*))CreateValueCallback_EndInvoke_m35212_gshared)(__this, ___result, method)
