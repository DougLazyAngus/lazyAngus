#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>
struct Transform_1_t7087;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m44972_gshared (Transform_1_t7087 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m44972(__this, ___object, ___method, method) (( void (*) (Transform_1_t7087 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m44972_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::Invoke(TKey,TValue)
extern "C" double Transform_1_Invoke_m44973_gshared (Transform_1_t7087 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m44973(__this, ___key, ___value, method) (( double (*) (Transform_1_t7087 *, Object_t *, double, const MethodInfo*))Transform_1_Invoke_m44973_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m44974_gshared (Transform_1_t7087 * __this, Object_t * ___key, double ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m44974(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7087 *, Object_t *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m44974_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Transform_1_EndInvoke_m44975_gshared (Transform_1_t7087 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m44975(__this, ___result, method) (( double (*) (Transform_1_t7087 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m44975_gshared)(__this, ___result, method)
