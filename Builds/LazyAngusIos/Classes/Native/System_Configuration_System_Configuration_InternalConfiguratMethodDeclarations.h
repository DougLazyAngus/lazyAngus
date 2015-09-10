#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t3335;
// System.Configuration.Configuration
struct Configuration_t3307;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C" void InternalConfigurationFactory__ctor_m12007 (InternalConfigurationFactory_t3335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C" Configuration_t3307 * InternalConfigurationFactory_Create_m12008 (InternalConfigurationFactory_t3335 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t707* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
