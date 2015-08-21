#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseObject,System.String>
struct Func_2_t1197;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t1219;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseObject,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7398(__this, ___object, ___method, method) (( void (*) (Func_2_t1197 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7457_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseObject,System.String>::Invoke(T)
#define Func_2_Invoke_m32107(__this, ___arg1, method) (( String_t* (*) (Func_2_t1197 *, ParseObject_t1219 *, const MethodInfo*))Func_2_Invoke_m30822_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseObject,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32108(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1197 *, ParseObject_t1219 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30824_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseObject,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32109(__this, ___result, method) (( String_t* (*) (Func_2_t1197 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30826_gshared)(__this, ___result, method)
