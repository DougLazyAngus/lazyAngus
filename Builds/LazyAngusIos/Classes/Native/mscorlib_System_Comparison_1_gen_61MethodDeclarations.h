#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Boolean>
struct Comparison_1_t6846;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Byte>
#include "mscorlib_System_Comparison_1_gen_51MethodDeclarations.h"
#define Comparison_1__ctor_m42153(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6846 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m35022_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Boolean>::Invoke(T,T)
#define Comparison_1_Invoke_m42154(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6846 *, bool, bool, const MethodInfo*))Comparison_1_Invoke_m35023_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Boolean>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m42155(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6846 *, bool, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m35024_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m42156(__this, ___result, method) (( int32_t (*) (Comparison_1_t6846 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m35025_gshared)(__this, ___result, method)
