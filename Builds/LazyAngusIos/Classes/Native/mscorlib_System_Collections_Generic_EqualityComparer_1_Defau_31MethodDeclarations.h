#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>
struct DefaultComparer_t9286;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::.ctor()
extern "C" void DefaultComparer__ctor_m69318_gshared (DefaultComparer_t9286 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m69318(__this, method) (( void (*) (DefaultComparer_t9286 *, const MethodInfo*))DefaultComparer__ctor_m69318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m69319_gshared (DefaultComparer_t9286 * __this, Label_t4485  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m69319(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9286 *, Label_t4485 , const MethodInfo*))DefaultComparer_GetHashCode_m69319_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m69320_gshared (DefaultComparer_t9286 * __this, Label_t4485  ___x, Label_t4485  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m69320(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9286 *, Label_t4485 , Label_t4485 , const MethodInfo*))DefaultComparer_Equals_m69320_gshared)(__this, ___x, ___y, method)
