#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.DateTime>>
struct Func_2_t7042;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7026;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.DateTime>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m44657(__this, ___object, ___method, method) (( void (*) (Func_2_t7042 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7197_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.DateTime>>::Invoke(T)
#define Func_2_Invoke_m44658(__this, ___arg1, method) (( Dictionary_2_t7026 * (*) (Func_2_t7042 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30027_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m44659(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7042 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30029_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m44660(__this, ___result, method) (( Dictionary_2_t7026 * (*) (Func_2_t7042 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30031_gshared)(__this, ___result, method)
