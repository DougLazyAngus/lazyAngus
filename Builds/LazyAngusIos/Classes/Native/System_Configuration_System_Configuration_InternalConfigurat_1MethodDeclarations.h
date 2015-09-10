#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.InternalConfigurationHost
struct InternalConfigurationHost_t3364;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t3362;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.IO.Stream
struct Stream_t51;
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow.h"
// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0.h"

// System.Void System.Configuration.InternalConfigurationHost::.ctor()
extern "C" void InternalConfigurationHost__ctor_m12013 (InternalConfigurationHost_t3364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationHost::CreateDeprecatedConfigContext(System.String)
extern "C" Object_t * InternalConfigurationHost_CreateDeprecatedConfigContext_m12014 (InternalConfigurationHost_t3364 * __this, String_t* ___configPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::GetConfigPathFromLocationSubPath(System.String,System.String)
extern "C" String_t* InternalConfigurationHost_GetConfigPathFromLocationSubPath_m12015 (InternalConfigurationHost_t3364 * __this, String_t* ___configPath, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.InternalConfigurationHost::GetConfigType(System.String,System.Boolean)
extern "C" Type_t * InternalConfigurationHost_GetConfigType_m12016 (InternalConfigurationHost_t3364 * __this, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::GetStreamName(System.String)
// System.Void System.Configuration.InternalConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
// System.Void System.Configuration.InternalConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
// System.Boolean System.Configuration.InternalConfigurationHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition)
extern "C" bool InternalConfigurationHost_IsDefinitionAllowed_m12017 (InternalConfigurationHost_t3364 * __this, String_t* ___configPath, int32_t ___allowDefinition, int32_t ___allowExeDefinition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::get_bundled_machine_config()
extern "C" String_t* InternalConfigurationHost_get_bundled_machine_config_m12018 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForRead(System.String)
extern "C" Stream_t51 * InternalConfigurationHost_OpenStreamForRead_m12019 (InternalConfigurationHost_t3364 * __this, String_t* ___streamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
