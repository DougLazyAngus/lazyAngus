#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t3363;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3312;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.String
struct String_t;

// System.Void System.Configuration.InternalConfigurationSystem::.ctor()
extern "C" void InternalConfigurationSystem__ctor_m12009 (InternalConfigurationSystem_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[])
extern "C" void InternalConfigurationSystem_Init_m12010 (InternalConfigurationSystem_t3363 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t707* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::InitForConfiguration(System.String&,System.String&,System.String&)
extern "C" void InternalConfigurationSystem_InitForConfiguration_m12011 (InternalConfigurationSystem_t3363 * __this, String_t** ___locationConfigPath, String_t** ___parentConfigPath, String_t** ___parentLocationConfigPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::get_Host()
extern "C" Object_t * InternalConfigurationSystem_get_Host_m12012 (InternalConfigurationSystem_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
