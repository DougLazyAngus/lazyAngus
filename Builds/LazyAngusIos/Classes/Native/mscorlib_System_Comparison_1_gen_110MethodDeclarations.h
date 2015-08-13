#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t8692;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t4729;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m64215(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8692 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21750_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Security.Policy.StrongName>::Invoke(T,T)
#define Comparison_1_Invoke_m64216(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8692 *, StrongName_t4729 *, StrongName_t4729 *, const MethodInfo*))Comparison_1_Invoke_m21751_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Security.Policy.StrongName>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m64217(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8692 *, StrongName_t4729 *, StrongName_t4729 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21752_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m64218(__this, ___result, method) (( int32_t (*) (Comparison_1_t8692 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21753_gshared)(__this, ___result, method)
