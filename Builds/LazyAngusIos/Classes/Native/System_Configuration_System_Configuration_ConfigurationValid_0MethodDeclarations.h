﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t3328;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.Configuration.ConfigurationValidatorBase::.ctor()
extern "C" void ConfigurationValidatorBase__ctor_m11902 (ConfigurationValidatorBase_t3328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationValidatorBase::CanValidate(System.Type)
extern "C" bool ConfigurationValidatorBase_CanValidate_m11903 (ConfigurationValidatorBase_t3328 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationValidatorBase::Validate(System.Object)