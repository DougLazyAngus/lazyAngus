﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>
struct Transform_1_t9269;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m69212_gshared (Transform_1_t9269 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m69212(__this, ___object, ___method, method) (( void (*) (Transform_1_t9269 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m69212_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::Invoke(TKey,TValue)
extern "C" Label_t4474  Transform_1_Invoke_m69213_gshared (Transform_1_t9269 * __this, int32_t ___key, Label_t4474  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m69213(__this, ___key, ___value, method) (( Label_t4474  (*) (Transform_1_t9269 *, int32_t, Label_t4474 , const MethodInfo*))Transform_1_Invoke_m69213_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m69214_gshared (Transform_1_t9269 * __this, int32_t ___key, Label_t4474  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m69214(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9269 *, int32_t, Label_t4474 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m69214_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::EndInvoke(System.IAsyncResult)
extern "C" Label_t4474  Transform_1_EndInvoke_m69215_gshared (Transform_1_t9269 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m69215(__this, ___result, method) (( Label_t4474  (*) (Transform_1_t9269 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m69215_gshared)(__this, ___result, method)