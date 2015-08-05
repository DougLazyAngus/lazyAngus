#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>
struct Func_2_t7091;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>
struct Dictionary_2_t7086;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m45334(__this, ___object, ___method, method) (( void (*) (Func_2_t7091 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7222_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>::Invoke(T)
#define Func_2_Invoke_m45335(__this, ___arg1, method) (( Dictionary_2_t7086 * (*) (Func_2_t7091 *, Object_t *, const MethodInfo*))Func_2_Invoke_m30055_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45336(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7091 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30057_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45337(__this, ___result, method) (( Dictionary_2_t7086 * (*) (Func_2_t7091 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30059_gshared)(__this, ___result, method)
