#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>
struct DefaultComparer_t9279;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::.ctor()
extern "C" void DefaultComparer__ctor_m69261_gshared (DefaultComparer_t9279 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m69261(__this, method) (( void (*) (DefaultComparer_t9279 *, const MethodInfo*))DefaultComparer__ctor_m69261_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m69262_gshared (DefaultComparer_t9279 * __this, Label_t4478  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m69262(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9279 *, Label_t4478 , const MethodInfo*))DefaultComparer_GetHashCode_m69262_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m69263_gshared (DefaultComparer_t9279 * __this, Label_t4478  ___x, Label_t4478  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m69263(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9279 *, Label_t4478 , Label_t4478 , const MethodInfo*))DefaultComparer_Equals_m69263_gshared)(__this, ___x, ___y, method)
