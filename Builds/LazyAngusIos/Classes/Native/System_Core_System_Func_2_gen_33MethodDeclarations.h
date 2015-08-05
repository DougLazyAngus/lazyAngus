#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseObject,Parse.ParseObject>
struct Func_2_t1234;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t1170;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseObject,Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7355(__this, ___object, ___method, method) (( void (*) (Func_2_t1234 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7222_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseObject,Parse.ParseObject>::Invoke(T)
#define Func_2_Invoke_m32744(__this, ___arg1, method) (( ParseObject_t1170 * (*) (Func_2_t1234 *, ParseObject_t1170 *, const MethodInfo*))Func_2_Invoke_m30055_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseObject,Parse.ParseObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32745(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1234 *, ParseObject_t1170 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30057_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseObject,Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32746(__this, ___result, method) (( ParseObject_t1170 * (*) (Func_2_t1234 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30059_gshared)(__this, ___result, method)
