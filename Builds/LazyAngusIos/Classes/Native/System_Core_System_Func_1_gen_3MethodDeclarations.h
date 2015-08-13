#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<Parse.ParseObject>
struct Func_1_t1395;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t1221;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"
#define Func_1__ctor_m7585(__this, ___object, ___method, method) (( void (*) (Func_1_t1395 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m30568_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<Parse.ParseObject>::Invoke()
#define Func_1_Invoke_m32388(__this, method) (( ParseObject_t1221 * (*) (Func_1_t1395 *, const MethodInfo*))Func_1_Invoke_m30570_gshared)(__this, method)
// System.IAsyncResult System.Func`1<Parse.ParseObject>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m32389(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1395 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m30572_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m32390(__this, ___result, method) (( ParseObject_t1221 * (*) (Func_1_t1395 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m30574_gshared)(__this, ___result, method)
