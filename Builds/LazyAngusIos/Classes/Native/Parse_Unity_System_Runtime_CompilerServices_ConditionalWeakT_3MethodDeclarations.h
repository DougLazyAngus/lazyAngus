#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t5875;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void CreateValueCallback__ctor_m29842_gshared (CreateValueCallback_t5875 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CreateValueCallback__ctor_m29842(__this, ___object, ___method, method) (( void (*) (CreateValueCallback_t5875 *, Object_t *, IntPtr_t, const MethodInfo*))CreateValueCallback__ctor_m29842_gshared)(__this, ___object, ___method, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * CreateValueCallback_Invoke_m29843_gshared (CreateValueCallback_t5875 * __this, Object_t * ___key, const MethodInfo* method);
#define CreateValueCallback_Invoke_m29843(__this, ___key, method) (( Object_t * (*) (CreateValueCallback_t5875 *, Object_t *, const MethodInfo*))CreateValueCallback_Invoke_m29843_gshared)(__this, ___key, method)
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C" Object_t * CreateValueCallback_BeginInvoke_m29844_gshared (CreateValueCallback_t5875 * __this, Object_t * ___key, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CreateValueCallback_BeginInvoke_m29844(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (CreateValueCallback_t5875 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))CreateValueCallback_BeginInvoke_m29844_gshared)(__this, ___key, ___callback, ___object, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * CreateValueCallback_EndInvoke_m29845_gshared (CreateValueCallback_t5875 * __this, Object_t * ___result, const MethodInfo* method);
#define CreateValueCallback_EndInvoke_m29845(__this, ___result, method) (( Object_t * (*) (CreateValueCallback_t5875 *, Object_t *, const MethodInfo*))CreateValueCallback_EndInvoke_m29845_gshared)(__this, ___result, method)
