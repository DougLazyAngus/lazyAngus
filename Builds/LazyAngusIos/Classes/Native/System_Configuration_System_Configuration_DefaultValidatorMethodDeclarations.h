#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.DefaultValidator
struct DefaultValidator_t3347;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.Configuration.DefaultValidator::.ctor()
extern "C" void DefaultValidator__ctor_m11928 (DefaultValidator_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultValidator::CanValidate(System.Type)
extern "C" bool DefaultValidator_CanValidate_m11929 (DefaultValidator_t3347 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultValidator::Validate(System.Object)
extern "C" void DefaultValidator_Validate_m11930 (DefaultValidator_t3347 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
