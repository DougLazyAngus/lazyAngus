#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.DictionaryEntry>
struct Transform_1_t9265;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m69241_gshared (Transform_1_t9265 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m69241(__this, ___object, ___method, method) (( void (*) (Transform_1_t9265 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m69241_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2160  Transform_1_Invoke_m69242_gshared (Transform_1_t9265 * __this, int32_t ___key, Label_t4478  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m69242(__this, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Transform_1_t9265 *, int32_t, Label_t4478 , const MethodInfo*))Transform_1_Invoke_m69242_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m69243_gshared (Transform_1_t9265 * __this, int32_t ___key, Label_t4478  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m69243(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9265 *, int32_t, Label_t4478 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m69243_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2160  Transform_1_EndInvoke_m69244_gshared (Transform_1_t9265 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m69244(__this, ___result, method) (( DictionaryEntry_t2160  (*) (Transform_1_t9265 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m69244_gshared)(__this, ___result, method)
