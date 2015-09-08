#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>
struct DefaultComparer_t9274;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::.ctor()
extern "C" void DefaultComparer__ctor_m69249_gshared (DefaultComparer_t9274 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m69249(__this, method) (( void (*) (DefaultComparer_t9274 *, const MethodInfo*))DefaultComparer__ctor_m69249_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m69250_gshared (DefaultComparer_t9274 * __this, Label_t4475  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m69250(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9274 *, Label_t4475 , const MethodInfo*))DefaultComparer_GetHashCode_m69250_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m69251_gshared (DefaultComparer_t9274 * __this, Label_t4475  ___x, Label_t4475  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m69251(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9274 *, Label_t4475 , Label_t4475 , const MethodInfo*))DefaultComparer_Equals_m69251_gshared)(__this, ___x, ___y, method)
