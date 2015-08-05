#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>
struct Func_2_t1154;
// System.Object
struct Object_t;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>
struct U3CU3Ef__AnonymousType0_2_t1333;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1332;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7176(__this, ___object, ___method, method) (( void (*) (Func_2_t1154 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7222_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::Invoke(T)
#define Func_2_Invoke_m31368(__this, ___arg1, method) (( U3CU3Ef__AnonymousType0_2_t1333 * (*) (Func_2_t1154 *, ConstructorInfo_t1332 *, const MethodInfo*))Func_2_Invoke_m30055_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m31369(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1154 *, ConstructorInfo_t1332 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30057_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Reflection.ConstructorInfo,<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m31370(__this, ___result, method) (( U3CU3Ef__AnonymousType0_2_t1333 * (*) (Func_2_t1154 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30059_gshared)(__this, ___result, method)
