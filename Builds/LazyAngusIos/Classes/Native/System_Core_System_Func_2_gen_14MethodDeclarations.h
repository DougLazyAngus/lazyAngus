#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>
struct Func_2_t1154;
// System.Object
struct Object_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1330;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>
struct U3CU3Ef__AnonymousType1_2_t1326;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7167(__this, ___object, ___method, method) (( void (*) (Func_2_t1154 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7210_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::Invoke(T)
#define Func_2_Invoke_m31386(__this, ___arg1, method) (( ConstructorInfo_t1330 * (*) (Func_2_t1154 *, U3CU3Ef__AnonymousType1_2_t1326 *, const MethodInfo*))Func_2_Invoke_m30043_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m31387(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1154 *, U3CU3Ef__AnonymousType1_2_t1326 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30045_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>,System.Reflection.ConstructorInfo>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m31388(__this, ___result, method) (( ConstructorInfo_t1330 * (*) (Func_2_t1154 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30047_gshared)(__this, ___result, method)
