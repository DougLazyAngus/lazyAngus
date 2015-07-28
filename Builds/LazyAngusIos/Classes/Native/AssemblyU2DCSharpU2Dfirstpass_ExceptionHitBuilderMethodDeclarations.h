#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExceptionHitBuilder
struct ExceptionHitBuilder_t18;
// System.String
struct String_t;

// System.Void ExceptionHitBuilder::.ctor()
extern "C" void ExceptionHitBuilder__ctor_m134 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExceptionHitBuilder::GetExceptionDescription()
extern "C" String_t* ExceptionHitBuilder_GetExceptionDescription_m135 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExceptionHitBuilder ExceptionHitBuilder::SetExceptionDescription(System.String)
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_SetExceptionDescription_m136 (ExceptionHitBuilder_t18 * __this, String_t* ___exceptionDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExceptionHitBuilder::IsFatal()
extern "C" bool ExceptionHitBuilder_IsFatal_m137 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExceptionHitBuilder ExceptionHitBuilder::SetFatal(System.Boolean)
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_SetFatal_m138 (ExceptionHitBuilder_t18 * __this, bool ___fatal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExceptionHitBuilder ExceptionHitBuilder::GetThis()
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_GetThis_m139 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExceptionHitBuilder ExceptionHitBuilder::Validate()
extern "C" ExceptionHitBuilder_t18 * ExceptionHitBuilder_Validate_m140 (ExceptionHitBuilder_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
