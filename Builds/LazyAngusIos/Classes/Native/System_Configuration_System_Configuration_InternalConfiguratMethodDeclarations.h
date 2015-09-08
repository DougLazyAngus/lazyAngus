#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t3325;
// System.Configuration.Configuration
struct Configuration_t3297;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t697;

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C" void InternalConfigurationFactory__ctor_m11950 (InternalConfigurationFactory_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C" Configuration_t3297 * InternalConfigurationFactory_Create_m11951 (InternalConfigurationFactory_t3325 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t697* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
