#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>
struct Transform_1_t7064;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m44691_gshared (Transform_1_t7064 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m44691(__this, ___object, ___method, method) (( void (*) (Transform_1_t7064 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m44691_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m44692_gshared (Transform_1_t7064 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m44692(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t7064 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m44692_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m44693_gshared (Transform_1_t7064 * __this, Object_t * ___key, float ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m44693(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7064 *, Object_t *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m44693_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m44694_gshared (Transform_1_t7064 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m44694(__this, ___result, method) (( Object_t * (*) (Transform_1_t7064 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m44694_gshared)(__this, ___result, method)
