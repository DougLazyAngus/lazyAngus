#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
struct Transform_1_t4135;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m28778_gshared (Transform_1_t4135 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m28778(__this, ___object, ___method, method) (( void (*) (Transform_1_t4135 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m28778_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m28779_gshared (Transform_1_t4135 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m28779(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t4135 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m28779_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m28780_gshared (Transform_1_t4135 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m28780(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4135 *, Object_t *, uint8_t, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m28780_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m28781_gshared (Transform_1_t4135 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m28781(__this, ___result, method) (( Object_t * (*) (Transform_1_t4135 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m28781_gshared)(__this, ___result, method)
