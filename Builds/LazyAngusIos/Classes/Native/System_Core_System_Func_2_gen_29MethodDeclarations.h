#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseObject,System.Boolean>
struct Func_2_t1268;
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

// System.Void System.Func`2<Parse.ParseObject,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m7537(__this, ___object, ___method, method) (( void (*) (Func_2_t1268 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m30175_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseObject,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m33410(__this, ___arg1, method) (( bool (*) (Func_2_t1268 *, ParseObject_t1221 *, const MethodInfo*))Func_2_Invoke_m30177_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseObject,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33411(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1268 *, ParseObject_t1221 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30179_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseObject,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33412(__this, ___result, method) (( bool (*) (Func_2_t1268 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30181_gshared)(__this, ___result, method)
