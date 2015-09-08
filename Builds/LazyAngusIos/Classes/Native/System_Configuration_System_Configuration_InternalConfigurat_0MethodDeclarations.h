#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t3353;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3302;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t697;
// System.String
struct String_t;

// System.Void System.Configuration.InternalConfigurationSystem::.ctor()
extern "C" void InternalConfigurationSystem__ctor_m11952 (InternalConfigurationSystem_t3353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[])
extern "C" void InternalConfigurationSystem_Init_m11953 (InternalConfigurationSystem_t3353 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t697* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::InitForConfiguration(System.String&,System.String&,System.String&)
extern "C" void InternalConfigurationSystem_InitForConfiguration_m11954 (InternalConfigurationSystem_t3353 * __this, String_t** ___locationConfigPath, String_t** ___parentConfigPath, String_t** ___parentLocationConfigPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::get_Host()
extern "C" Object_t * InternalConfigurationSystem_get_Host_m11955 (InternalConfigurationSystem_t3353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
