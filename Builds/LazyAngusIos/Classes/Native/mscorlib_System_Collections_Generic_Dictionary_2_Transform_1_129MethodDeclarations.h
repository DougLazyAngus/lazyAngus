#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct Transform_1_t9283;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_146.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m69302_gshared (Transform_1_t9283 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m69302(__this, ___object, ___method, method) (( void (*) (Transform_1_t9283 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m69302_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t9273  Transform_1_Invoke_m69303_gshared (Transform_1_t9283 * __this, int32_t ___key, Label_t4485  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m69303(__this, ___key, ___value, method) (( KeyValuePair_2_t9273  (*) (Transform_1_t9283 *, int32_t, Label_t4485 , const MethodInfo*))Transform_1_Invoke_m69303_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m69304_gshared (Transform_1_t9283 * __this, int32_t ___key, Label_t4485  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m69304(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9283 *, int32_t, Label_t4485 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m69304_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t9273  Transform_1_EndInvoke_m69305_gshared (Transform_1_t9283 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m69305(__this, ___result, method) (( KeyValuePair_2_t9273  (*) (Transform_1_t9283 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m69305_gshared)(__this, ___result, method)
