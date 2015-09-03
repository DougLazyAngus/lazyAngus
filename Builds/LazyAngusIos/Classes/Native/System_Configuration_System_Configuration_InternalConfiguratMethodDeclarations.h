#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t3324;
// System.Configuration.Configuration
struct Configuration_t3296;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C" void InternalConfigurationFactory__ctor_m11937 (InternalConfigurationFactory_t3324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C" Configuration_t3296 * InternalConfigurationFactory_Create_m11938 (InternalConfigurationFactory_t3324 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t696* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
