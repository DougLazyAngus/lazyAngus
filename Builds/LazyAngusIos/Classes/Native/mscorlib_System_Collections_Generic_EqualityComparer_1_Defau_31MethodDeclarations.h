#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>
struct DefaultComparer_t9273;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::.ctor()
extern "C" void DefaultComparer__ctor_m69236_gshared (DefaultComparer_t9273 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m69236(__this, method) (( void (*) (DefaultComparer_t9273 *, const MethodInfo*))DefaultComparer__ctor_m69236_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m69237_gshared (DefaultComparer_t9273 * __this, Label_t4474  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m69237(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9273 *, Label_t4474 , const MethodInfo*))DefaultComparer_GetHashCode_m69237_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m69238_gshared (DefaultComparer_t9273 * __this, Label_t4474  ___x, Label_t4474  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m69238(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9273 *, Label_t4474 , Label_t4474 , const MethodInfo*))DefaultComparer_Equals_m69238_gshared)(__this, ___x, ___y, method)
